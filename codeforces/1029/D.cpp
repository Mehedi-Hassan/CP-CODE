#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

#define ll              long long
#define llu             unsigned long long
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

map<ll, ll>ln;

ll pw(ll n)
{
    ll lim = 1;
    for(int i=1;i<11;i++){
        lim*=10;
        if(n < lim)
            return ln[n] = i;
    }
}

map<ll, map<ll, ll> >cnt;
int main()
{
    FASTIO

    ll n, k;
    cin>>n>>k;

    ll a[n], sz, ans = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sz = pw(a[i]);
        cnt[sz][a[i]%k]++;

//        cout<<sz<<" "<<a[i]<<endl;
    }

    for(int i=0;i<n;i++){
        ll x = 0, md = a[i]%k;

        for(int j=1;j<=20-ln[a[i]];j++){
//            x *= 10;
//            x += 9;


            md *= 10;
            md %= k;

//            ll num = x- x%k - md;
//            cout<<num<<endl;
//            cout<<x<<" "<<x0<<" "<<num<<endl;
//            num -= x0;

//            if(num < 0)
//                num = ((num%k) + k);
            ll num = k-md;
            num %= k;

            if(cnt[j].find(num) != cnt[j].end())
                ans += cnt[j][num];
            if(ln[a[i]]==j && (num == a[i]%k)) ans--;
//            cout<<a[i]<<" "<<j<< " "<<cnt[j][num%k]<<endl;
        }
    }

    cout<<ans;


}

//
//8 1000000000
//1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000

//2 7
//78 12 28

//10 999999929
//7100 50410000 911025347 280422928 2930161 804144520 426497339 131321888 385470972 844095456
