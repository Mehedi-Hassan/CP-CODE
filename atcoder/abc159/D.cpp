#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
ll cnt[200009];
int main()
{
    int n;
    cin>>n;

    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    ll ans = 0;
    for(int i=1;i<=n;i++){
        ans += cnt[i]*(cnt[i]-1)/2;
    }

    for(int i=0;i<n;i++){
        ll x = cnt[a[i]] - 1;
        cout<<ans - cnt[a[i]]*(cnt[a[i]]-1)/2 + x*(x-1)/2<<endl;;

    }
}


