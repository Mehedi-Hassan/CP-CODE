#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
map<int, int> vis;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n], ans = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(vis[a[i]] == 0){
                vis[a[i]] = 1;
                ans++;
            }
        }
        vis.clear();
        cout<<ans<<endl;

    }
}
