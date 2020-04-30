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



int main()
{
    FASTIO;

    int n, m, s;
    cin>>n>>m>>s;

    vector<int>g[n+9], rg[n+9];
    int u, v, in[n+9];
    vector<int>vis(n+9, 0);
    mem(in);

    for(int i=0;i<m;i++){
        cin>>u>>v;
        g[u].pb(v);
        rg[v].pb(u);

        in[v] = 1;
    }

    stack<int>st;
    st.push(s);
    vis[s] = 1;


    while(!st.empty()){
        int src = st.top();
        st.pop();

//        cout<<src<<endl;
        for(int i=0;i<g[src].size();i++){
            if(vis[g[src][i]] == 0){
                vis[g[src][i]] = 1;
                st.push(g[src][i]);
            }
        }
    }


    int ans = 0;
//    cout<<s<<endl;
    for(int i=1;i<=n;i++){

        if(s == i)
            continue;
//        cout<<s<<" "<<i<<endl;
        if(in[i] == 0){
            in[i] = 1;
            ans++;

//            s = i;
            st.push(i);
            vis[i] = 1;

            while(!st.empty()){
                int src = st.top();
                st.pop();

                for(int j=0;j<g[src].size();j++){
                    if(vis[g[src][j]] == 0){
                        vis[g[src][j]] = 1;
                        st.push(g[src][j]);
                    }
                }
            }
        }
//        cout<<i<<" "<<ans<<endl;
    }

//    cout<<ans<<endl;
    for(int i=1;i<=n;i++){
        if(vis[i] == 0){
            ans++;

            s = i;
            st.push(s);

            vector<int>vis2;
            vis2 = vis;
            vis2[s] = 1;

            int ns = s;
            while(!st.empty()){
                int src = st.top(), d= 0;
                st.pop();

                for(int j=0;j<rg[src].size();j++){
                    if(vis2[rg[src][j]] == 0){
                        vis2[rg[src][j]] = 1;
                        st.push(rg[src][j]);
                        d = 1;
                    }
                }
                if(d == 0 && st.empty()){
                    ns = src;
                }
            }

            s = ns;
            st.push(s);
            vis[s] = 1;

            while(!st.empty()){
                int src = st.top();
                st.pop();

                for(int j=0;j<g[src].size();j++){
                    if(vis[g[src][j]] == 0){
                        vis[g[src][j]] = 1;
                        st.push(g[src][j]);
                    }
                }
            }
        }
    }

    cout<<ans<<endl;

}



