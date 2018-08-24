#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n+9];

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=1,cnt=1;
    for(ll i=0; i<n-1; i++){
        if(a[i+1] <= 2*a[i]) cnt++;
        else cnt=1;
        ans=max(ans,cnt);
    }
    cout<<ans;
}


