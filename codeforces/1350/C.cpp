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
#define mx              500

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

int p[2000];
vector<ll>prime;

void sieve()
{
    int sq = sqrt(mx);

    for(int i=3;i<=sq;i+=2){
        if(p[i] == 0){
            for(int j=i*i;j<=mx;j+=2*i){
                p[j] = 1;
            }
        }
    }

    prime.pb(2);
    for(int i=3;i<=mx;i+=2){
        if(p[i] == 0){
            prime.pb(i);
//            cout<<i<<" ";
        }
    }
}

int main()
{
    FASTIO

    sieve();
//    cout<<prime.size()<<endl;
    ll n;
    cin>>n;

    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll sz = prime.size();
    ll ans = 1;
    for(int i=0;i<sz;i++){
        ll x = prime[i];
        vector<ll>bal;

        for(int j=0;j<n;j++){
            int cnt = 0;
            while(a[j]%x == 0){
                a[j]/=x;
                cnt++;
            }
            bal.pb(cnt);
        }
        sort(bal.begin(), bal.end());

//        ll xx = 1;
        while(bal[1]--)
            ans *= x;
    }

    map<ll, ll>cnt;
    vector<ll>bal;

    for(int i=0;i<n;i++){
        if(a[i]){
            if(cnt[a[i]] == 0){
                bal.pb(a[i]);
            }
            cnt[a[i]]++;
        }

    }
    sz = bal.size();
    for(int i=0;i<sz;i++){
        if(n-cnt[bal[i]]<2)
            ans *= bal[i];
    }
    cout<<ans;
}



