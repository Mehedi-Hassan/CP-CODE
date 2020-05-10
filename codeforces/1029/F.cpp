#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

#define ll              long long
#define pii             pair<int, int>
#define f               first
#define s               second
#define sf(a)           scanf("%d", &a)
#define sfl(a)          scanf("%lld", &a)
#define pf(a)           printf("%d ", a)
#define pfl(a)          printf("%lld\n", a)
#define Case(a)         printf("Case %d: ", a)
#define FASTIO          ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define pb              push_back
#define mp              make_pair
#define mem(arr)        memset(arr, 0, sizeof(arr))
#define mem1(arr)       memset(arr, -1, sizeof(arr))

const double eps = 1e-9;
const double pi = acos(-1);

int dx[5] = {+1, +0, -1, -0};
int dy[5] = {+0, +1, -0, -1};

bool Equal(double x, double y)
{
    return fabs(x-y)<eps; ///x==y
}

bool Greater(double x, double y)
{
    return x-eps>y; ///x>y
}

bool Lesser(double x, double y)
{
    return x+eps<y; ///x>y
}

struct point
{
    double x, y, ang;
};



int main()
{
//    FASTIO

//    while(1){
    ll a, b;
    cin>>a>>b;

    ll n = a+b;
    ll ans = 3*n;
    vector<ll>d1, d2;

    for(ll i=1;i<=sqrt(a);i++){
        if(a%i == 0)
            d1.pb(i);
    }


    for(ll i=1;i<=sqrt(n);i++){
        if(n%i == 0)
            d2.pb(i);
    }

    int s1 = d1.size();

    for(int i=0;i<d2.size();i++){
        for(int j=0;j<s1;j++){
            if(a/d1[j] <= n/d2[i] && d1[j]<=d2[i]){
                 ans = min(ans, 2*(d2[i] + n/d2[i]));
            }
        }
    }
//cout<<3121561;

    d1.clear();

    for(int i=1;i<=sqrt(b);i++){
        if(b%i == 0)
            d1.pb(i);
    }

    s1 = d1.size();
    for(int i=0;i<d2.size();i++){
        for(int j=0;j<s1;j++){
            if(b/d1[j] <= n/d2[i] && d1[j]<=d2[i]){
                 ans = min(ans, 2*(d2[i] + n/d2[i]));
            }
        }
    }

    cout<<ans;

//    }
}



