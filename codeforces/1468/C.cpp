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

const int N = 5 * MAX5;

bool vis[N];

struct cmp { 
    constexpr bool operator()(pair<int, int> const& a, pair<int, int> const& b) const noexcept 
    { 
        if(a.first==b.first) return a.second > b.second;
        return a.first < b.first;
    } 
}; 


int main()
{
    //#ifndef ONLINE_JUDGE
    //    freopen("in.txt","r",stdin);
    //    freopen("out.txt","w",stdout);
    //#endif

    FASTIO;
    int q;
    sf(q);
    priority_queue<pii, vector<pii>, cmp>p1;
    queue<int>p2;
    int id = 1;
    while(q--) {
        int t;
        sf(t);
        if(t==1) {
            int m;
            sf(m);
            p1.push({m, id});
            p2.push(id);
            id++;
        }
        if(t==2) {
            while(vis[p2.front()]) p2.pop();
            printf("%d ", p2.front());
            vis[p2.front()] = true;
            p2.pop();
        }
        if(t==3) {
            while(vis[p1.top().second]) p1.pop();
            printf("%d ", p1.top().second);
            vis[p1.top().second] = true;
            p1.pop();
        }
    }
    
    return 0;
}
