#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,ans=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='x' && str[i+1]=='x')
        {
            for(j=i+2;;)
            {
                if(str[j]==str[i]) {
                    ans++;
                    j++;
                }
                else break;
            }
            i=j-1;
        }
    }
    cout<<ans;
}

