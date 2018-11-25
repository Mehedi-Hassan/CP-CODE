#include<bits/stdc++.h>
using namespace std;
#define ll                long long


int main()
{
    ll n,k;

    cin>>n>>k;

    ll ans = ((n*2)/k);
    if ((n*2)%k) ans++;
//    cout<<ans<<endl;

    ans += ((n*5)/k);
    if ((n*5)%k) ans++;
//    cout<<ans<<endl;

    ans += ((n*8)/k);
    if ((n*8)%k) ans++;

    cout<<ans;
}
