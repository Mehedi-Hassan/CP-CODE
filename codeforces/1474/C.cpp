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
const int MX = 1000006;
int cnt[MX];

signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    
    FASTIO
    
    int T;
    cin>>T;

    f(tc, 1, T){
        int n;
        cin>>n;
        n = 2*n;

        int a[n+1];
        f(i, 1, n){
            cin>>a[i];
            // cnt[a[i]]++;
        }
        sort(a+1, a+n+1, greater<int>());

        int sum = 0;
        vii ans;
        fr(j, n, 2){
            f(i, 1, n){
                // cin>>a[i];
                cnt[a[i]]++;
            }

            int x = a[1], y = a[j], tot = x+y;
            // error(x, y);
            cnt[x]--;
            cnt[y]--;

            vii p;
            p.pb({x, y});

            int bad = 0;

            f(i, 2, n){
                // if(tot == 21){
                //     error(a[i]);
                // }
                if(cnt[a[i]] > 0){
                    if(x - a[i]>0){
                        // error(x, x-a[i], cnt[x], cnt[x-a[i]]);
                        cnt[a[i]]--;
                        if(cnt[x-a[i]] > 0){
                            cnt[a[i]]++;
                            y = x-a[i];
                            x = a[i];
                            if(x<y) swap(x, y);
                            cnt[x]--;
                            cnt[y]--;
                            p.pb({x,y});
                            // if(tot == 21){
                            //     error(x, y);
                            // }
                        }
                        else{
                            cnt[a[i]]++;
                        }
                    }
                }
            }
            // error(tot, sz(p));
            if(sz(p) != n/2){
                bad = 1;
            }
            f(i, 1, n){
                cnt[a[i]] = 0;
                // cout<<a[i]<<" ";
            }
            if(!bad){
                sum = tot;
                ans = p;
                break;
            }
        }

        if(sum){
            YES;
            cout<<sum<<endl;
            for(auto x:ans){
                cout<<x.first<<" "<<x.second<<endl;
            }
        }
        else{
            NO;
        }



        
        
        
        
        
        
        f(i, 1, n){
            cnt[a[i]] = 0;
            // cout<<a[i]<<" ";
        }
        // cout<<endl;
        
    }


//    tridel(root);
}





