#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    string s;

    cin>>n;
    cin>>s;
    char a,b;
    for(int i=0;i<n-1;i++)
    {
        int cnt=1;
        for(int j=i+1;j<n-1;j++)
        {
            if(s[i]==s[j] && s[i+1]==s[j+1]){
                cnt++;
            }
        }
        if(cnt>mx){
            mx=cnt;
            a=s[i];
            b=s[i+1];
        }
    }
    cout<<a<<b;
}
