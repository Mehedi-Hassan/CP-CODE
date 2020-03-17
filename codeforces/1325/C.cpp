#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
vector< int >g[100009];
vector< pii >given, node;
map<int, map<int,int> >edge;

bool cmp(pii a, pii b)
{
    return a.second > b.second;
}

int main()
{
    int n, u, v;
    cin>>n;

    for(int i=0;i<n-1;i++){
        cin>>u>>v;

        g[u].push_back(v);
        g[v].push_back(u);
        given.push_back(pii(u,v));
        edge[u][v] = edge[v][u] = -1;
    }

    int mx = 0, val = 0;
    for(int i=1;i<=n;i++){
//        cout<<i<<' '<<g[i].size()<<endl;
        node.push_back(pii(i, g[i].size()));
    }
    sort(node.begin(), node.end(), cmp);
//    cout<<endl;
//    cout<<node[0].first<<endl;
    for(int i=0;i<n;i++){
        u = node[i].first;
        for(int j=0;j<g[u].size();j++){
            v = g[u][j];
            if(edge[u][v] == -1){
                edge[u][v] = edge[v][u] = val++;
//                cout<<u<<" "<<v<<" "<<val-1<<endl;
            }
        }
    }

    for(int i=0;i<n-1;i++){
        u = given[i].first;
        v = given[i].second;
        cout<<edge[u][v]<<endl;
    }
}

