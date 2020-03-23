#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define inf 2000000000
#define infLL 2000000000000000000
#define MAX 200005
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(t) printf("Case %d: ", t)
#define pii pair<int, int>
#define MOD 1000000007
#define mod 998244353
#define PI acos(-1.0)
#define eps 1e-9
#define mem(a, b) memset(a, b, sizeof(a))
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

inline int Set(int N, int pos){return N=N | (1<<pos);}
inline int Reset(int N, int pos){return N=N & ~(1<<pos);}
inline bool Check(int N, int pos){return (bool)(N & (1<<pos));}

inline void normal(ll &a) { a %= mod; (a < 0) && (a += mod); }
inline ll modMul(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a * b) % mod; }
inline ll modAdd(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a + b) % mod; }
inline ll modSub(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while (p) { if (p & 1LL) r = modMul(r, b); b = modMul(b, b); p >>= 1LL; } return r; }
inline ll modInverse(ll a) { return modPow(a, mod - 2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }


using namespace std;


int main()
{
    FASTIO;

    int t;
    cin>>t;

    while(t--){
        ll n, k;
        cin>>n>>k;

        if((n%2 == 0 && k%2 == 1) || (n%2 == 1 && k%2 == 0)){
            cout<<"NO"<<endl;
            continue;
        }

        ll sum = (k-2)*(k-1) + k-1;
        if(sum >= n || (n-sum)%2 == 0 || (n-sum)<2*k-1){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
    }
}

