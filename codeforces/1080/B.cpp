#include<bits/stdc++.h>
using namespace std;
#define ll                long long

ll fun(ll n)
{
    ll ev = n/2;
    ll ans = ev * (ev+1);

    ans -= (ev*(ev+1) - ev);
    if(n%2) ans -= n;

    return ans;
}

int main()
{

//    cout<<fun(9)<<endl;
    int q;
    cin>>q;

    while(q--){
        ll l,r;
        cin>>l>>r;

        cout<<fun(r) - fun(l-1)<<endl;
    }
}
