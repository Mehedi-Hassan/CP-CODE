#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
map< int, int>vis;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = 0;
        vis.clear();
        for(int i=0;i<n;i++){
            if(a[i]%2 == 1 || vis[a[i]] == 1)
            continue;

            while(a[i]%2 == 0){
                vis[a[i]] = 1;
                a[i]/=2;
                ans++;
                if(vis[a[i]] == 1)
                    break;
            }
        }
        cout<<ans<<endl;

    }
}

