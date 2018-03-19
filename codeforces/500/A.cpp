#include<bits/stdc++.h>
using namespace std;
#define MX 30009
int visited[MX];
vector<int> graph[MX];

int dfs(int s)
{
    if(visited[s]==0){
        visited[s]=1;
        for(int i=0;i<graph[s].size();i++)
            dfs(graph[s][i]);
    }
}
int main()
{
    int x,n,t;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
        visited[i]=0;
    for(int i=1;i<n;i++){
        cin>>x;
        graph[i].push_back(i+x);
    }
    dfs(1);
    if(visited[t]) cout<<"YES";
    else cout<<"NO";
    return 0;
}
