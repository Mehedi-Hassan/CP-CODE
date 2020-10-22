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
#define pb              push_back
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
const int N = 100007;
int r[N], c[N];

signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    FASTIO
    int T;
//    cin>>T;
    T = 1;

    for(int tc = 1;tc<=T; tc++){
        int n;
        cin>>n;

        int a[n+1], c1=0, c2=0;
        f(i, 1, n){
            cin>>a[i];
//            if(a[i] == 1) c1++;
//            if(a[i] == 2) c2++;
        }

//        if(c2 > c1 || c1==0){
//            cout<<-1;
//            rr;
//        }

        int row = n+1;

//        vi rl, cl;
        vii ans;

//        set<int>st;
        stack<int>st1, st2, st3, st1c;

        fr(col, n, 1){
            if(a[col] == 0) continue;
            else if(a[col] == 1){
                ans.pb({--row, col});
                st1.push(row);
                st1c.push(col);
            }
            else if(a[col] == 2){
                if(st1.empty()){
                    cout<<-1;
                    rr;
                }
                ans.pb({st1.top(), col});
                st2.push(col);
                st1.pop();
                st1c.pop();
            }
            else{
                if(!st3.empty()){
                    ans.pb({--row, col});
                    ans.pb({row, st3.top()});
                    st3.pop();
                    st3.push(col);
                }
                else if(!st2.empty()){
                    ans.pb({--row, col});
                    ans.pb({row, st2.top()});
                    st2.pop();
                    st3.push(col);
                }
                else if(!st1c.empty()){
                    ans.pb({--row, col});
                    ans.pb({row, st1c.top()});
                    st1c.pop();
                    st1.pop();
                    st3.push(col);
                }
                else{
                    cout<<-1;
                    rr;
                }
            }
        }
//        fr(col, n, 1){
//            if(a[col] == 1){
//                r[--row]++;
//                c[col]++;
//                rl.pb(row);
//                cl.pb(col);
//                ans.pb(pii(row, col));
//
//                st.insert(col);
//            }
//        }
//
//        int id = 0, gese = row;
//        fr(col, n, 1){
//            if(a[col] == 2){
//                if(st.find(cl[id]) != st.end())
//                    st.erase(cl[id]);
//                row = rl[id++];
//                r[row]++;
//                c[col]++;
//                ans.pb(pii(row, col));
//                st.insert(col);
//            }
//        }
//
//        id = n;
//        row = gese;
//        fr(col, n, 1){
//            if(a[col] == 3){
//                --row;
//
//                set<int>::iterator it = st.upper_bound(col);
//                if(it == st.end()){
//                    cout<<-1;
//                    rr;
//                }
//                id = *it;
//
//                r[row]+=2;
//                c[col]++;
//                c[id]++;
//                ans.pb(pii(row, id));
//                ans.pb(pii(row, col));
//
//                if(r[row]>2 || c[col]>2 || c[id]>2){
////                    error(r[row], c[col], c[id]);
//                    cout<<-1;
//                    rr;
//                }
//
//                st.insert(col);
//                st.erase(id);
//            }
//        }

        cout<<sz(ans)<<endl;


        for(auto x:ans){
            cout<<x.fi<<" "<<x.se<<endl;
        }













    }


//    tridel(root);
}





