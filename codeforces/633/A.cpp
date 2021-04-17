//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx,avx2,fma")
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define PI              acos(-1.0)
#define No              cout<<"No\n"
#define Yes             cout<<"Yes\n"
#define no              cout<<"no\n"
#define yes             cout<<"yes\n"
#define NO              cout<<"NO\n"
#define YES             cout<<"YES\n"
#define MOD             (int)1000000007
#define int             long long
#define ll              long long
#define dl              double
#define pii             pair<int, int>
#define fi              first
#define se              second
#define sf(a)           scanf("%lld", &a)
#define sf2(a, b)       scanf("%lld %lld", &a, &b);
#define sf3(a, b, c)    scanf("%lld %lld %lld", &a, &b, &c);
#define pf(a)           printf("%lld ", a)
#define pfn(a)          printf("%lld\n", a)
#define case(a)         cout<<"Case "<<a<<": ";
#define casehash(a)     cout<<"Case #"<<a<<": ";
#define FASTIO          ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define pb              push_back
#define mem(arr)        memset(arr, 0, sizeof(arr))
#define mem1(arr)       memset(arr, -1, sizeof(arr))
#define all(a)          a.begin(),a.end()
#define f(i,a,b)        for (int i = a; i<=b; i++)
#define fr(i,a,b)       for (int i = a; i>=b; i--)
#define rr              return 0
#define prec(n)         fixed<<setprecision(n)
#define maxpq           priority_queue<int>
#define minpq           priority_queue<int, vector<int>, greater<int> >
#define inf             (int)(1e18)
#define vi              vector<int>
#define vii             vector<pii>
#define sz(s)           s.size()
#define lcm(a,b)        (a*(b/gcd(a,b)))


int gcd(int a, int b)   {return __gcd(a,b);}

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p & 1LL) r = modMul(r, b); b = modMul(b, b); p >>= 1LL; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

inline int checkBit(ll n, int i) { return n&(1ll<<i); }
inline void setBit(ll &n, int i) { n |= (1ll<<i); }
inline void resetBit(ll &n, int i) { n &= ~(1ll<<i); }


const double eps = 1e-9;

int dx[5] = {+1, +0, -1, -0};
int dy[5] = {+0, +1, -0, -1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

inline bool Equal(double x, double y) { return fabs(x-y)<eps; }
inline bool Greater(double x, double y){ return x-eps>y; }
inline bool Lesser(double x, double y){ return x+eps<y; }

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr << '\n'; }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << " "; err(++it, args...); }

///Write what you need -->
/// nt, ft, kmp, tri, sufarr, ub_lb, lis
/// dsu, combi, segtree, segtreelazy, lca_bin_lift


///Template Ends Here////////////////////////////

// Find any solution (this code does not consider the case a=b=0)

ll exgcd(ll a, ll b, ll& x, ll& y) {
    x = 1, y = 0;
    ll x1 = 0, y1 = 1, a1 = a, b1 = b;
    while(b1) {
        ll q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}

// Find any solution (this code does not consider the case a=b=0)
bool LDE(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
    g = exgcd(abs(a), abs(b), x0, y0);
    if(c % g) return false;
    x0 *= c / g;
    y0 *= c / g;
    if(a < 0) x0 = -x0;
    if(b < 0) y0 = -y0;
    return true;
}

inline ll Floor(ll p, ll q) {return p>0 ? p/q : p/q - !!(p%q);}
inline ll Ceil(ll p, ll q)  {return p<0 ? p/q : p/q + !!(p%q);}
// Number of solutions of Diophantine Eqn : Ax + By = C
// A,B,C,x,y integers and X1 <= x <= X2 and Y1 <= y <= Y2
inline ll solve(ll A,ll B,ll C,ll X1,ll X2,ll Y1,ll Y2) {
    if(A < 0) { A = -A; B = -B; C = -C; }
 
    ll x,y; 
    ll G = exgcd(A,B,x,y);
    if(G && C%G) return 0;
    
    if(A == 0 && B == 0) return (C == 0) ? (X2 - X1 + 1) * (Y2 - Y1 + 1) : 0;
    if(A == 0) return (Y1 <= C/B && C/B <= Y2) ? (X2 - X1 + 1) : 0;
    if(B == 0) return (X1 <= C/A && C/A <= X2) ? (Y2 - Y1 + 1) : 0;
 
    x = x * (C/G);  y = y * (C/G);
 
    ll newX1 = C - B * Y1, newX2 = C - B * Y2;
    if(newX1> newX2) swap(newX1, newX2);
    newX2 = Floor(newX2, A); newX1 = Ceil(newX1, A);
 
    if(X1 > newX2) return 0;
    if(X2 < newX1) return 0;
    X1 = max(X1, newX1); X2 = min(X2, newX2);
 
    ll div = abs(B/G);
    if(x < X1) return (X2 - x) / div - (X1 - 1 - x) / div;
    if(x > X2) return (x - X1) / div - (x - X2 - 1) / div;
    return 1 + (x - X1) / div + (X2 - x) / div;
}



signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    FASTIO

    int a, b, c;
    cin>>a>>b>>c;

    if(solve(a, b, c, 0, c, 0, c)) Yes;
    else No;
    
    
    
    
    
    


//    tridel(root);
}





