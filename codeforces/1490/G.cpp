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


signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    
    FASTIO

    int cnt = 0;
    
    int T;
    cin>>T;

    f(tc, 1, T){
        int n, m;
        cin>>n>>m;

        int a[n+1], s[n+1], mx = -inf;

        vi v;
        s[0] = 0;
        f(i, 1, n){
            cin>>a[i];
            s[i] = s[i-1] + a[i];
            mx = max(mx, s[i]);
            v.pb(mx);
        }

        int pm = m;

        

        while(m--){
            int x;
            cin>>x;

            if(s[n]<=0 && mx<x){
                cnt++;
                // if(cnt == 222) cout<<x<<00<<" ";
                // if(cnt == 223) cout<<x<<00<<" ";
                // if(cnt == 224) cout<<x<<00<<" ";
                cout<<-1<<" ";
                continue;
            }

            int lo = 0, hi = n - 1, ans = n, rot = 0;
            ans = lower_bound(all(v), x) - v.begin();

            if(s[n]>0 && x>mx){
                rot = (x-mx)/s[n] + ((x-mx)%s[n] != 0);
            }

            // error(rot, x, mx, s[n], ans);

            int plo = -1, phi = -1;

            while(lo <= hi && s[n]>0){
                if(plo==lo && phi==hi) break;
                plo = lo, phi = hi;

                int mid = (lo+hi)/2;
                
                int d = v[mid];
                int nrot = max(x-d, 0ll)/s[n] + (max(x-d, 0ll)%s[n] != 0);

                // error(lo, hi, mid, nrot, rot);
                if(nrot > rot){
                    lo = mid+1;
                }
                else{
                    hi = mid;
                    ans = rot*n + mid;
                }
            }
            cnt++;
            // if(cnt == 222) cout<<x<<00<<" ";
            // if(cnt == 223) cout<<x<<00<<" ";
            // if(cnt == 224) cout<<x<<00<<" ";

            // if(cnt == 224){
            //     cout<<a[1]<<00<<a[2]<<00<<a[3]<<" ";
            // }

            cout<<ans<<" ";
        }
        cout<<endl;


        
        
        
        
        
        
        
        
    }


//    tridel(root);
}





