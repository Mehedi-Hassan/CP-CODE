#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define PI              acos(-1.0)
#define No              cout<<"No\n";
#define Yes             cout<<"Yes\n";
#define no              cout<<"no\n";
#define yes             cout<<"yes\n";
#define NO              cout<<"NO\n";
#define YES             cout<<"YES\n";
#define MOD             (int)1000000007
#define int             long long
#define ll              long long
#define pii             pair<int, int>
#define fi               first
#define se              second
#define sf(a)           scanf("%lld", &a)
#define pf(a)           printf("%lld ", a)
#define case(a)         cout<<"Case #"<<a<<":\n";
#define FASTIO          ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define pb              emplace_back
#define mp              make_pair
#define mem(arr)        memset(arr, 0, sizeof(arr))
#define mem1(arr)       memset(arr, -1, sizeof(arr))
#define all(a)          a.begin(),a.end()
#define for0(i, n)      for (int i = 0; i < n; i++)
#define for1(i, n)      for (int i = 1; i <= n; i++)
#define loop(i,a,b)     for (int i = a; i <= b; i++)
#define loopr(i,a,b)    for (int i = a ; i>=b;i--)
#define rr              return 0
#define prec(n)         fixed<<setprecision(n)
#define maxpq           priority_queue<int>
#define minpq           priority_queue<int, vector<int>, greater<int> >
#define inf             (int)(1e18)
#define vi              vector<int>
#define endl            "\n"
#define vii             vector<pii>
#define sz(s)           s.size()
#define bits(n)         __builtin_popcount(n)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define MX              500005


int gcd(int a, int b)   {return __gcd(a,b);}

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p & 1LL) r = modMul(r, b); b = modMul(b, b); p >>= 1LL; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }



const double eps = 1e-9;

int dx[5] = {+1, +0, -1, -0};
int dy[5] = {+0, +1, -0, -1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

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
    return x+eps<y; ///x<y
}

struct point
{
    double x, y, ang;
};
///Write what you need -->
/// nt, ft, kmp, tri, sufarr, ub_lb, lis



///Template Ends Here////////////////////////////
const int N = 2000006;
int fact[N], inv[N];

int ncr(int n, int r){
    return (fact[n]%MOD * inv[r]%MOD * inv[n-r]%MOD)%MOD;
}
signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

//    FASTIO

    int k;
    cin>>k;

    string s;
    cin>>s;

    int n = sz(s);

    fact[0] = 1;
    for1(i, n+k){
        fact[i] = fact[i-1] * i;
        fact[i] %= MOD;
    }
    for0(i, n+k+1){
        inv[i] = modInverse(fact[i]);
        inv[i] %= MOD;
    }

    int ans = 0;

    for(int i=k; i>=0; i--){
        int temp = modMul(modPow(26, i), modPow(25, k-i));
        temp = modMul(temp, ncr(n+k-i-1, n-1));
        ans = modAdd(ans, temp);
    }

    cout<<ans;




//    tridel(root);
}




