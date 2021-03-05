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
/// dsu, combi


///Template Ends Here////////////////////////////
string s, t;
const int MX = 200005;

struct st
{
    int sum, prop, marked;
    st(){
        prop = -1;
        marked = 0;
    }
}tree[4*MX];

int a[MX]; 
void init(int node, int b, int e)
{
    if(b == e){
        tree[node].sum = a[b];
        return;
    }

    int left = 2*node, right = left+1, mid = (b+e)/2;

    init(left, b, mid);
    init(right, mid+1, e);

    tree[node].sum = tree[left].sum + tree[right].sum;

    tree[node].prop = -1;
    tree[node].marked = 0;
}

void push(int node, int b, int mid, int e)
{
    if(tree[node].marked){
        int left = 2*node, right = left+1;
        tree[left].prop = tree[node].prop;
        tree[right].prop = tree[node].prop;


        if(tree[node].prop != -1){
            tree[left].sum = (mid-b+1) * tree[node].prop;
            tree[right].sum = (e-mid) * tree[node].prop;
        }

        tree[node].prop = -1;
        tree[node].marked = 0;
 
        tree[left].marked = tree[right].marked = 1;
    }
}
void update(int node, int b, int e, int i, int j, int x)
{
    if(e<i || b>j) return;
    if(i<=b && e<=j){
        tree[node].sum = (e-b+1)*x;
        tree[node].prop = x;
        tree[node].marked = 1;
        return;
    }

    int left = 2*node, right = left+1, mid = (b+e)/2;
    push(node, b, mid, e);

    update(left, b, mid, i, j, x);
    update(right, mid+1, e, i, j, x);

    tree[node].sum = tree[left].sum + tree[right].sum;    
}

int query(int node, int b, int e, int i, int j)
{
    if(e<i || b>j) return 0;
    if(i<=b && e<=j){
        return tree[node].sum;
    }

    int left = 2*node, right = left+1, mid = (b+e)/2;
    push(node, b, mid, e);

    return query(left, b, mid, i, j) +
            query(right, mid+1, e, i, j);
}

signed main()
{
    FASTIO
    
    int T;
    cin>>T;

    f(tc, 1, T){
        int n, q;
        cin>>n>>q;

        cin>>s>>t;

        f(i, 1, n){
            a[i] = t[i-1] - '0';
        }

        init(1, 1, n);

        

        int l[q+1], r[q+1];
        fr(i, q, 1){
            cin>>l[i]>> r[i];
        }

        int bad = 0;

        f(i, 1, q){
            int cnt1 = query(1, 1, n, l[i], r[i]);
            int cnt0 = r[i] - l[i] +1 - cnt1, x;

            // error(l[i], r[i], cnt0, cnt1);

            if(cnt0 < cnt1) x = 1;
            else if(cnt1 < cnt0) x = 0;
            else if(cnt0 == cnt1){
                NO;
                bad = 1;
                break;
            }

            update(1, 1, n, l[i], r[i], x);
            // error("OK");
        }

        if(!bad){
            string ans;
            f(i, 1, n){
                ans += ('0' + query(1, 1, n, i, i));
            }

            if(ans == s){
                YES;
            }
            else{
                NO;
            }
        }

        


        
        
        
        
        
        
    }


//    tridel(root);
}





