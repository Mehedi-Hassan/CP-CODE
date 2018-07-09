#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,bool> vis,m;
int a[120009];
int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        vis[a[i]]=1;
        m[a[i]]++;
    }
    ll j,yes;
    sort(a,a+n);
    for(int i=0;i<n;i++){
            yes=0;
        for(j=2;j<100000000000;j*=2){

            if(vis[j-a[i]]==1){
                if(a[i]==j-a[i]){
                    if(a[i]!=a[i+1] && a[i]!=a[i-1]) continue;
                }
//                cout<<a[i]<<" "<<j-a[i]<<endl;
                yes=1;
                break;

            }
        }
        if(yes==0) cnt++;
    }
    cout<<cnt;
}


