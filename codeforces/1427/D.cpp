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


signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

//    FASTIO

    int n, q=0;
    cin>>n;

    vi a(n+1), target(n+1), sorted(n+1);
    f(i, 1, n){
        cin>>a[i];
        target[i] = n-i+1;
        sorted[i] = i;
    }

    if(a == sorted){
        cout<<0;
        rr;
    }

    vi ans[n+1];
    while(a != target){
        int id=0, lage = 2;
        fr(i, n, 1){
            if(a[i] == 1){
                id = i;
                continue;
            }
            if(id){
                if(a[i]==a[i+1]+1) lage++;
                else break;
            }
        }
        f(k, 1, id-lage+1){
            ans[q].pb(1);
        }

        int len = lage-1, paisi = 1, last=0;
//        error(lage, len);
        f(i, id+1, n){
            if(a[i] == lage){
                ans[q].pb(len);
                if(paisi){
                    paisi = 0;
                    ans[q].pb(1);
                }
                len = 1;
                lage++;
                last = n-i;
            }
            else
                len++;
        }

        if(paisi){
            ans[q].pb(len);
        }
        if(last) ans[q].pb(last);
//        if() ans[q].pb(len);

        vi b;
        b.pb(0);
//        cout<<ans[q].size()<<endl;

        int st = n+1;
        fr(j, sz(ans[q])-1, 0){
            st -= ans[q][j];
            f(i, st, st+ans[q][j]-1){
                b.pb(a[i]);
            }
        }

//        f(i, 0, sz(ans[q])-1){
//            cout<<ans[q][i]<<" ";
//        }
//        cout<<endl;

        a = b;
        q++;


//        f(i, 0, n){
//            cout<<a[i]<<" ";
//        }
//        cout<<endl;
    }

    cout<<q+1<<endl;
    f(i, 0, q-1){
        cout<<sz(ans[i])<<" ";
        for(auto x:ans[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<n<<" ";
    f(i, 1, n)
    cout<<1<<" ";































//    tridel(root);
}




