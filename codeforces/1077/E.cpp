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

map<int, int>cnt;

int main()
{
    FASTIO

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }

    vector<ll>v;

    for(auto i:cnt){
        v.pb(i.s);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    ll ans =v[0], mn = v[0];

    n = v.size();
//    cout<<mn<<" "<<ans<<endl;
    for(int i=1;i<n;i++){
        mn = min(mn/2, v[i]);
        ans = max(ans, mn*((1LL<<(i+1)) - 1));
//        cout<<mn<<" "<<mn*((1LL<<(i+1)) - 1)<<endl;
        if(mn == 1)
            break;
    }

    cout<<ans;
}




