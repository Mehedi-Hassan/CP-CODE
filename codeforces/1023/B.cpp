#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    while(1){
    ll n,k,ans;
    cin>>n>>k;
    if(k<n){
        ll r=k-1,l=1;
        ans=r-l+1;
        ans/=2;
    }
    else if(k>n){
        ll r=n,l=k-n;
        ans=r-l+1;
        ans/=2;
    }
    else{
        ans=n-1;
        ans/=2;
    }
    if(ans<0 || k<=2) ans=0;
    cout<<ans;
//    }
}
