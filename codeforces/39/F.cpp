#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cnt[109];


int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    int f[m+9], ms[k+9];

    for(int i=0;i<m;i++){
        cin>>f[i];
    }

    for(int i=0;i<k;i++){
        cin>>ms[i];
    }

    ll mn=1000;
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            if(ms[j]%f[i]==0){
                cnt[i]++;
            }
        }

        mn=min(mn,cnt[i]);
    }
    int ans=0;
    for(int i=0;i<m;i++){
        if(cnt[i]==mn){
            ans++;
        }
    }

    cout<<ans<<endl;
    for(int i=0;i<m;i++){
        if(cnt[i]==mn){
            cout<<i+1<<" ";
        }
    }
}
