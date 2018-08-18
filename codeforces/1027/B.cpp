#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,q;
    cin>>n>>q;
    ll odln=n/2+n%2, evln=n/2;
    while(q--){
        ll ans=0,l,r,f=0;
        cin>>l>>r;
        if((l+r)%2){
            ans=(n*n)/2 + (n*n)%2;
            if(l%2) r--;
            else{
                r++;
                if(n%2) ans--;
            }
        }
        ans+=odln*((l-1)/2+(l-1)%2);
//        cout<<ans<<endl;
        l=(l-1)/2;
        ans+=evln*l;
//        cout<<ans<<endl;
        ans+=r/2 + r%2;
        cout<<ans<<endl;
    }
}

