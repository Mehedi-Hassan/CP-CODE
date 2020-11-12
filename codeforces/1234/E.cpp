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

struct st{
    int f, s, id;
};

bool cmp1(st a, st b)
{
    return a.f < b.f;
}

bool cmp2(st a, st b)
{
    return a.s < b.s;
}


signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

//    FASTIO

    int n, m;
    cin>>n>>m;

    int a[m+1], p[n+1], ans = 0;
    map<int, int>prev;
    vi lar(m+1), rar(m+1);
    st l[m+1], r[m+1];

    f(i, 1, n){
        p[i] = i;
    }
    f(i, 1, m){
        cin>>a[i];
        if(i>1){
            ans += abs(a[i] - a[i-1]);
            l[i].f = r[i].f = a[i-1];
            l[i].s = r[i].s = a[i];
            l[i].id = r[i].id = i;
            prev[i] = abs(a[i] - a[i-1]);
        }
    }
    cout<<ans<<" ";

    sort(l+2, l+m+1, cmp1);
    sort(r+2, r+m+1, cmp2);

    lar[0] = rar[0] = 0;
    lar[1] = rar[1] = 0;


    f(i, 2, m){
        lar[i] = l[i].f;
        rar[i] = r[i].s;
//        error(lar[i], rar[i]);
    }

    int x=1, y=1;

    f(i, 2, n){
        x++;
        y = x-1;

        p[x] = 1;
        p[y] = i;

//        f(k, 1, n){
//            cout<<p[k]<<" ";
//        }
//        cout<<endl;

        map<int, int>done;

        int j = lower_bound(all(lar), y) - lar.begin();
//        error(i, j);
        for(;j<=m; j++){
            if(l[j].f!=x && l[j].s!=x && l[j].f!=y && l[j].s!=y)
                break;

//            if(done[l[j].id] == 0){
                done[l[j].id] = 1;
                ans -= prev[l[j].id];
//                error(l[j].f, l[j].s, prev[l[j].id], abs(p[l[j].f] - p[l[j].s]));
                prev[l[j].id] = abs(p[l[j].f] - p[l[j].s]);
                ans += prev[l[j].id];

//            }
        }

        j = lower_bound(all(rar), y) - rar.begin();

//        error(i, j, ans);
        for(;j<=m; j++){
            if(r[j].f!=x && r[j].s!=x && r[j].f!=y && r[j].s!=y)
                break;

            if(done.find(r[j].id) == done.end()){
                done[r[j].id] = 1;
                ans -= prev[r[j].id];
//                error(l[j].f, l[j].s, prev[r[j].id], abs(p[r[j].f] - p[r[j].s]));
                prev[r[j].id] = abs(p[r[j].f] - p[r[j].s]);
                ans += prev[r[j].id];
            }
        }

        cout<<ans<<" ";
    }
































//    tridel(root);
}




