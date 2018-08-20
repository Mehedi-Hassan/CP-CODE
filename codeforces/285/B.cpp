#include<bits/stdc++.h>
using namespace std;
int vis[100009];
int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    int a[n+5];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=s;;){
        if(vis[i]==1){
            cout<<-1;
            return 0;
        }
        else{
            if(i==t){
                cout<<cnt;
                return 0;
            }
            cnt++;
            vis[i]=1;
            i=a[i];
        }
    }
}
