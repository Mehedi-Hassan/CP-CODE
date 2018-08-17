#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ncr(ll n)
{
    return (n*(n-1))/2;
}
int main()
{
    ll n,m,mn,mx;
    cin>>n>>m;
    cout<<(n%m)*ncr(n/m +1) + (m-n%m)*ncr(n/m)<<" "<<ncr(n-m+1);
}
