#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)

using namespace std;
int main()
{
    ll n, k;
    cin>>n>>k;

    ll pre = n;

    if(min(n%k, abs(n%k - k)) < n )
        n = min(n%k, abs(n%k - k));

    cout<<n;
}


