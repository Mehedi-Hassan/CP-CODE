#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n=str.size(), l=n;

    while(--l){
        for(int i=0;i<=n-l;i++){

            string s2, sb=str.substr(i,l);
            int cnt=0;
            for(int j=0;j<=n-l;j++){
                s2=str.substr(j,l);
                if(sb==s2) cnt++;
                if(cnt==2){
                    cout<<l;
                    return 0;
                }
            }
        }
    }
    cout<<l;
}
