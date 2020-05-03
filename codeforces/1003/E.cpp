#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

#define ll              long long
#define pii             pair<int, int>
#define f               first
//#define s               second
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

vector<int>g[400009];
int vis[400009];

int dfs(int s)
{
    if(vis[s] == 1)
        return 0;
    vis[s] = 1;
    int mx = 0;
    for(int i=0;i<g[s].size();i++){
        if(vis[g[s][i]] == 0){
            mx = max(mx, dfs(g[s][i]));
        }
    }
    return mx+1;
}
int main()
{
    FASTIO;

    int n, d, k;
    cin>>n>>d>>k;

    if(n-1 < d){
        cout<<"NO";
        return 0;
    }

    queue<int>q;
    q.push(1);
    q.push(2);


    g[1].pb(2);
    g[2].pb(1);

    for(int i=3;i<=d +1;i+=2){
        g[i-2].pb(i);
        g[i].pb(i-2);
//        cout<<i-2<<" "<<i<<endl;
    }

    for(int i=4;i<=d+1;i+=2){
        g[i-2].pb(i);
        g[i].pb(i-2);
//        cout<<i-2<<" "<<i<<endl;
    }

    int cnt = d+2, l = 1, r = 2;
    while(!q.empty()){
        int s = q.front(); q.pop();
        if(s == l && l+2<=n){
            q.push(l+2);
            l += 2;
        }
        if(g[s].size()>k){
            cout<<"NO\n";
            return 0;
        }
        for(int i=g[s].size();i<k && cnt<=n ;i++){
            g[s].pb(cnt);
            g[cnt].pb(s);
            q.push(cnt++);
        }
        if(s == r && r+2<=n){
            q.push(r+2);
            r += 2;
        }
    }

    int dis = dfs(d+1);
    dis--;
//    cout<<dis<<endl;
    if(dis > d){
        cout<<"NO";
        return 0;
    }

    cout<<"YES\n";
    int sz;
    cout<<"1 2"<<endl;
    for(int i=1;i<=n;i++){
        sz = g[i].size();
        for(int j=1;j<sz;j++){
            cout<<i<<" "<<g[i][j]<<endl;
        }
    }
}



