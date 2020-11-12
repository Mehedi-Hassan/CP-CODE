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
#define pii             pair<int, int>
#define fi               first
#define se              second
#define sf(a)           scanf("%lld", &a)
#define pf(a)           printf("%lld ", a)
#define case(a)         cout<<"Case "<<a<<": ";
#define FASTIO          ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define pb              emplace_back
#define mp              make_pair
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

inline bool checkBit(ll n, int i) { return n&(1LL<<i); }
inline ll setBit(ll n, int i) { return n or (1LL<<i);; }
inline ll resetBit(ll n, int i) { return n&(~(1LL<<i)); }


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

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr << '\n'; }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << " "; err(++it, args...); }

///Write what you need -->
/// nt, ft, kmp, tri, sufarr, ub_lb, lis
/// dsu


///Template Ends Here////////////////////////////
const int N = 100005;
vi g[N];
set<int>st[N];
int col[N], vis[N];

void dfs(int s)
{
    vis[s] = 1;
    for(int x:g[s]){
        if(!vis[x]){
            dfs(x);
        }
    }
}
signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    FASTIO

//    int n;
//    cin>>n;
//
//    int a[n+1];
//    f(i, 1, n){
//        cin>>a[i];
//    }

    int n, m, x, y;
    cin>>n>>m;

    f(i, 1, m){
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }

    dfs(1);
    f(i, 1, n){
        if(!vis[i]){
            cout<<-1;
            rr;
        }
    }

    mem(vis);

    int s = -1;
    f(i, 1, n){
        if(!col[i]){
            s = i;
            break;
        }
    }

    for(int x:g[s]){
        vis[x] = 1;
    }

    col[s] = 1;
    f(i, 1, n){
        if(!vis[i] && !col[i]){
            col[i] = 1;
        }
    }

    int ok = 0, tot1 = 0, tot2=0, tot3=0;
    f(i, 1, n){
        if(col[i] == 1){
            ok = 1;
            tot1++;
            for(int x:g[i]){
                if(col[x] == 1){
                    cout<<-1;
                    rr;
                }
            }
        }
    }

    if(!ok){
        cout<<-1;
        rr;
    }

//    if(n==27653 && m==165889){
//        cout<<tot<<" ";
//    }

    mem(vis);



    ///2
    s = -1;
    f(i, 1, n){
        if(!col[i]){
            s = i;
            break;
        }
    }
    if(s == -1){
        cout<<-1;
        rr;
    }

    for(int x:g[s]){
        vis[x] = 1;
    }

    col[s] = 2;
    f(i, 1, n){
        if(!vis[i] && !col[i]){
            col[i] = 2;
        }
    }

    ok = 0;
    f(i, 1, n){
        if(col[i] == 2){
            ok = 1;
            tot2++;
            for(int x:g[i]){
                if(col[x] == 2){
                    cout<<-1;
                    rr;
                }
            }
        }
    }
//    if(n==27653 && m==165889){
//        cout<<tot<<" ";
//    }
    if(!ok){
        cout<<-1;
        rr;
    }

    mem(vis);




    ///3
    s = -1;
    f(i, 1, n){
        if(!col[i]){
            s = i;
            break;
        }
    }
    if(s == -1){
        cout<<-1;
        rr;
    }

    for(int x:g[s]){
        vis[x] = 1;
    }

    col[s] = 3;
    f(i, 1, n){
        if(!vis[i] && !col[i]){
            col[i] = 3;
        }
    }

    ok = 0;
    f(i, 1, n){
        if(col[i] == 3){
            ok = 1;
            tot3++;
            for(int x:g[i]){
                if(col[x] == 3){
                    cout<<-1;
                    rr;
                }
            }
        }
    }
//    if(n==27653 && m==165889){
//        cout<<tot<<"\n";
//    }
    if(!ok || (tot1*tot2 + tot2*tot3 + tot3*tot1 != m)){
        cout<<-1;
        rr;
    }

    mem(vis);

    ///last
    s = -1;
    f(i, 1, n){
        if(!col[i]){
            s = i;
            break;
        }
    }
    if(s != -1){
        cout<<-1;
        rr;
    }

    ///sesh
    f(i, 1, n){
        cout<<col[i]<<" ";
    }



























//    tridel(root);
}




