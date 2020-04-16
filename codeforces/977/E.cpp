#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
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





using namespace std;
vector<int>g[200009];
int vis[200009];

void dfs(int s)
{
    vis[s] = 1;
    for(int i=0;i<g[s].size();i++){
        if(vis[g[s][i]] == 0){
            dfs(g[s][i]);
        }
    }
}
int main()
{
    FASTIO;

    int n, m, x, y;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int ans = 0;
    for(int i=1;i<=n;i++){
        if(vis[i] == 0){
            dfs(i);

            int j = i;
            while(g[j].size()==2){
                vis[j] = 2;
                if(vis[g[j][0]] == 1){
                    j = g[j][0];
                }
                else if(vis[g[j][1]] == 1){
                    j = g[j][1];
                }
                else if(g[j][0] == i || g[j][1] == i){
                    ans++;
                    break;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<ans;

}


