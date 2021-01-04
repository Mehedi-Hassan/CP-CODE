//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx,avx2,fma")
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define PI              acos(-1.0)
#define No              printf("No\n")
#define Yes             printf("Yes\n")
#define no              printf("no\n")
#define yes             printf("yes\n")
#define NO              printf("NO\n")
#define YES             printf("YES\n")
#define MOD             (int)1000000007
#define int             long long
#define ll              long long
#define pii             pair<int, int>
#define fi              first
#define se              second
#define sf(a)           scanf("%lld", &a)
#define pf(a)           printf("%lld ", a)
#define pfn(a)          printf("%lld\n", a)
#define case(a)         printf("Case %lld: ", a)
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

inline bool checkBit(ll n, int i) { return n&(1LL<<i); }
inline ll setBit(ll n, int i) { return n or (1LL<<i);; }
inline ll resetBit(ll n, int i) { return n&(~(1LL<<i)); }


const double eps = 1e-9;

inline bool Equal(double x, double y) { return fabs(x-y)<eps; }
inline bool Greater(double x, double y){ return x-eps>y; }
inline bool Lesser(double x, double y){ return x+eps<y; }

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr << '\n'; }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << " "; err(++it, args...); }

///Write what you need -->
/// nt, ft, kmp, tri, sufarr, ub_lb, lis
/// dsu, combi


///Template Ends Here////////////////////////////

signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

//    FASTIO
    int T;
    // sf(T);
    T = 1;

    for(int tc = 1;tc<=T; tc++){
        int n;
        sf(n);

        int x[n+1], y[n+1];
        f(i, 1, n){
            sf(x[i]);
            sf(y[i]);
        }

        map<pii, int>mp;
        int ans = 0;
        f(i, 1, n){
            f(j, i+1, n){
                int dx = x[i] + x[j], dy = y[i] + y[j];
                mp[{dx, dy}]++;
            }
        }

        for(auto el: mp){
//            error(el.fi.fi.fi, el.fi.fi.se, el.se);
            ans += el.se*(el.se-1)/2;
        }
//        ans /= 2;

//        error(ans);
        // case(tc);
        pfn(ans);









    }


//    tridel(root);
}






