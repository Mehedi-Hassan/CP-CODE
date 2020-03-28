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

using namespace std;
int mp[2005][2005], cnt[2009], vis[2009], dis[2009];
int main()
{
//    int t;
//    cin>>t;
//
//    for(int tc = 1;tc<=t; tc++){
//
//    }
    int n, x, y;
    cin>>n>>x>>y;

    vector<int>g[n+9];
    for(int i=1;i<n;i++){
        g[i].push_back(i+1);
        g[i+1].push_back(i);
    }
    g[x].push_back(y);
    g[y].push_back(x);

    for(int i=1;i<=n;i++){
        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        queue<int>q;
        q.push(i);
        dis[i] = 0;
        vis[i] = 1;
        while(!q.empty())
        {
            int s = q.front();
            q.pop();
            for(int j=0;j<g[s].size();j++){
                if(vis[g[s][j]] == 0){
                    vis[g[s][j]] = 1;
                    dis[g[s][j] ] = dis[s] + 1;
                    q.push(g[s][j]);
                }
            }
        }

        for(int j=1;j<i;j++){
            mp[j][i] = dis[j];
        }

        for(int j=i+1;j<=n;j++){
            mp[i][j] = dis[i];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cnt[mp[i][j]]++;
        }
    }

    for(int i=1;i<n;i++){
        cout<<cnt[i]<<endl;;
    }
}




