#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, num, d;

    cin>>n>>k;

//    if(n < k){
//        cout<<n+k;
//        return 0;
//    }

    ll ans = 10000000000;
    for(ll i=1; i<k; i++){
        if(n%i == 0){
            d = n/i;
            num = d*k + i;

            ans = min(ans, num);
        }
    }

    cout<<ans;
}
