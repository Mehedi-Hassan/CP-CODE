#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

#define ll              long long
#define pii             pair<int, int>
#define f               first
#define s               second
#define sf(a)           scanf("%d", &a)
#define sfl(a)          scanf("%lld", &a)
#define pf(a)           printf("%d ", a)
#define pfl(a)          printf("%lld\n", a)
#define Case(a)         printf("Case %d: ", a)
#define FASTIO          ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define pb              push_back
#define mp              make_pair
#define mem(arr)        memset(arr, 0, sizeof(arr))
#define mem1(arr)       memset(arr, -1, sizeof(arr))

const double eps = 1e-9;
const double pi = acos(-1);

int dx[5] = {+1, +0, -1, -0};
int dy[5] = {+0, +1, -0, -1};

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
    return x+eps<y; ///x>y
}

struct point
{
    double x, y, ang;
};


vector<int>g[200005];

int vis[200005], dis[200005], par[200005];

int main()
{
    FASTIO

    int n, x, y;
//    cin>>n;
    sf(n);

//    int par[n+9];
    par[1] = 0;
    for(int i=0;i<n-1;i++){
//        cin>>x>>y;
        sf(x);
        sf(y);
        g[x].pb(y);
        g[y].pb(x);

//        par[y] = x;
    }

    queue<int>q;
    set<pii>st;
    set<pii>::iterator it;

    q.push(1);
    dis[1] = 0;
    vis[1] = 1;

    while(!q.empty()){
        int s = q.front();
        q.pop();

        for(int i=0;i<g[s].size();i++){
            if(vis[g[s][i]] == 0){
                vis[g[s][i]] = 1;
                dis[g[s][i]] = dis[s]+1;
                q.push(g[s][i]);
                par[g[s][i]] = s;
            }
        }
    }

    for(int s=1;s<=n;s++){
        if(dis[s] > 2){
            st.insert(pii(-dis[s], s));
        }
    }

//    mem(vis);
    int ans = 0;
    while(!st.empty()){
        int v = st.begin()->s;
        v = par[v];
        ans++;

        it = st.find(pii(-dis[v], v));
        if(it != st.end()){
            st.erase(it);
        }

        for(int i=0;i<g[v].size();i++){
            it = st.find(pii(-dis[g[v][i]], g[v][i]));
            if(it != st.end()){
                st.erase(it);
            }
        }
    }
    pf(ans);
//    cout<<ans;
}



