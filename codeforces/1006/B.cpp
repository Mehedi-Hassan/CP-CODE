#include<bits/stdc++.h>
using namespace std;
int vis[10000];
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+5],x[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
        x[i]=a[i];
    }
    int t[n+8],idx=0,ans=0;
    sort(x,x+n,greater<int>());
    for(int i=0;i<k;i++){
            ans+=x[i];
        for(int j=0;j<n;j++){
            if(a[j]==x[i] && vis[j]==0){
                t[idx++]=j;
                vis[j]=1;
                break;
            }
        }
    }
    cout<<ans<<endl;
    sort(t,t+idx);
//    for(int i=0;i<idx;i++) cout<<t[i]<< " ";
    if(idx==1) cout<<n;
    else cout<<t[0]+1<<" ";

    for(int i=1;i<idx;i++){
        if(i==idx-1) cout<<n-t[i-1]-1;
        else cout<<t[i]-t[i-1]<<" ";
    }
//    if(idx==2)
//    cout<<n-t[idx-2]-1;
}
