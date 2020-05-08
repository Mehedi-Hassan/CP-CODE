#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll i, u, v, t, n, m, temp,size1,size2;
vector<ll>adj[200010],ans1,ans2;
queue<ll>Queue;
bool s;
map<ll, bool>visited;
// ll label[200010];
map<ll, ll>label;
int main()
{
    cin >> t;
    while(t--)
    {
        cin>>n>>m;

        for(i=0; i <m; i++)
        {
            cin>>v>>u;
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        Queue.push(1);
        label[1]=1;
        visited[1]=true;
        while(!Queue.empty())
        {
            v=Queue.front();
            Queue.pop();
            if(label[v]%2==1)
                ans1.push_back(v);
            else
                ans2.push_back(v);
            for(i=0; i<adj[v].size(); i++)
            {
                if(!visited[adj[v][i]])
                {
                    visited[adj[v][i]] = true;
                    Queue.push(adj[v][i]);
                    label[adj[v][i]] = label[v]+1;
                }

            }
        }
        size1=ans1.size();
        size2=ans2.size();
        if(size1<size2)
        {
            cout<< size1<<endl;
            for(i=0; i<size1; i++)
                cout<<ans1[i]<<" ";
        }
        else
        {
            cout<< size2<<endl;
            for(i=0; i<size2; i++)
                cout<<ans2[i]<<" ";
        }
        cout<<endl;
        ans1.clear();
        ans2.clear();

        // memset(visited,0,sizeof(visited));
        // memset(label,0,sizeof(label));
        
        label.clear();
        visited.clear();

        for(i=0; i<n; i++)
            if(!adj[i+1].empty())
                adj[i+1].clear();
    }
    return 0;
}