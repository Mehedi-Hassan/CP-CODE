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

map<ll, ll>cnt, cnt2;
int main()
{
    FASTIO;

    int n, q;
    cin>>n>>q;

    ll x;
    for(int i=0;i<n;i++){
        cin>>x;
        cnt[x]++;
    }

//    cin>>q;
    while(q--){
        x = 1<<30;
        ll b, ans = 0;
        cin>>b;
        cnt2 = cnt;
        while(x){
            ans += min(b/x, cnt[x]);
            b -= x*min(b/x, cnt[x]);

            x = x >> 1;
//            cout<<b<<endl;
        }
//        cout<<61665;
        if(b==0)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;

    }

}



