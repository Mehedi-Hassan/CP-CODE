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


vector<int>g[200009], ans;
int cnt[200009], id[200009];

int dfs(int s)
{
    int sum = 1;
    ans.pb(s);
    id[s] = ans.size()-1;
    for(int i=0;i<g[s].size();i++){
        sum += dfs(g[s][i]);
    }
    return cnt[s] = sum;
}

int main()
{
    FASTIO

    int n ,q;
    cin>>n>>q;

    int a[n+9];
    for(int i=2;i<=n;i++){
        cin>>a[i];
        g[a[i]].pb(i);
    }
    for(int i=1;i<=n;i++){
        sort(g[i].begin(), g[i].end());
    }

    cnt[1] = dfs(1);

    int u, k;
    while(q--){
        cin>>u>>k;
        if(k <= cnt[u]){
            k--;
            cout<<ans[id[u]+k]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}



