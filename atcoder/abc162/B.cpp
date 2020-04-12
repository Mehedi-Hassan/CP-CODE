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
    int n;
    cin>>n;

    ll sum = 0;
    for(ll i=1;i<=n;i++){
        if(i %3 == 0 || i%5 == 0)
            continue;
        sum += i;

    }
    cout<<sum;
}

