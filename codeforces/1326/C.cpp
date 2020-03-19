#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define mx      998244353

using namespace std;
vector<pii>v;

bool cmp(pii a, pii b)
{
    return a.s > b.s;
}
int main()
{
    ll n, k;
    cin>>n>>k;

    ll a[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(pii(i, a[i]));
    }

    sort(v.begin(), v.end(), cmp);
    sort(v.begin(), v.begin()+k);

    ll ans = 0, mul = 1;
    for(int i=0;i<k-1;i++){
        ans += v[i].s;
        mul = (mul%mx * (v[i+1].f - v[i].f)%mx)%mx;
    }
    ans += v[k-1].s;
    cout<<ans<<" "<<mul;


}
