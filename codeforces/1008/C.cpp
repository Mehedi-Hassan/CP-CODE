#include<bits/stdc++.h>
using namespace std;
int vis[100009];
int main()
{
    int n,ans=0;
    cin>>n;
    int a[n+6],cnt[n+6],ex[n+6];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int idx=0,c=0;
    for(int i=0;i<n;i++){
        c++;
        if(a[i]!=a[i+1]) {
            cnt[idx]= c;
            ex[idx++]=c;
            c=0;
        }
    }
    cnt[idx]= c;
    ex[idx++]=c;
    for(int i=0;i<idx;i++){
        c=0;
        int tar=cnt[i];
        for(int j=i+1;j<idx;j++){
            if(c+ex[j]<=tar){
                c+=ex[j];
                ex[j]=0;
            }
            else{
                ex[j]=ex[j]-tar+c;
                c=tar;
            }
            if(c==tar) break;
        }
        ans+=c;
    }
    cout<<ans;
}




