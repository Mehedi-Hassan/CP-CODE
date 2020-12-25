#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define inf 2000000000
#define infLL 2000000000000000000
#define MAX5 100005
#define MAX6 1000006
#define MAX7 10000007
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sfs(a) scanf("%s", a)
#define sline(a) scanf("%[^\n]%*c", a);
#define pf(a) printf("%d\n", a)
#define pfl(a) printf("%lld\n", a)
#define pfs(a) printf("%s\n", a)
#define Case(t) printf("Case %d: ", t)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mod 1000000007
#define Mod 998244353
#define PI acos(-1.0)
#define eps 1e-9
#define mem(a, b) memset(a, b, sizeof(a))
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

const int N = MAX5;

int main()
{
    //#ifndef ONLINE_JUDGE
    //    freopen("in.txt","r",stdin);
    //    freopen("out.txt","w",stdout);
    //#endif

    FASTIO;
    int T;
    sf(T);
    while(T--) {
        int n;
        sf(n);
        map<pii, int>mp;
        for(int i = 0; i < n; i++) {
            int x, y, u, v;
            sf(x);
            sf(y);
            sf(u);
            sf(v);
            int X = (u - x);
            int Y = (v - y);
            int g = __gcd(abs(X), abs(Y));
            if(g!=0) {
                X = X / g;
                Y = Y / g;
            }
            mp[{X, Y}]++;
        }
        ll ans = 0;
        for(auto v : mp) {
            int x = v.first.first;
            int y = v.first.second;
            ll add1 = v.second;
            mp[{x, y}] = 0;
            ll add2 = mp[{-x, -y}];
            mp[{-x, -y}] = 0;
            // add2 += mp[{-x, y}];
            // mp[{-x, y}] = 0;
            // add2 += mp[{x, -y}];
            // mp[{x, -y}] = 0;
            // cout<<add1<<" "<<add2<<endl;
            ans += (add1 * add2);
        }
        pfl(ans);
    }
    
    return 0;
}
