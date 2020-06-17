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
int vis[200009];
map<int, map<int, int> >mp;
int main()
{
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        memset(vis, 0, sizeof(vis));
        int mx = 0, cnt = 0;
        for(int i=0;i<n;i++){
            if(vis[a[i]] == 1)
                break;
            vis[a[i]] = 1;
            mx = max(mx, a[i]);
            if(mx == i+1){
                mp[i+1][n-i-1]++;
            }
        }
        memset(vis, 0, sizeof(vis));
        mx = 0;

        vector<pii>ans;
        for(int i=n-1;i>=0;i--){
            if(vis[a[i]] == 1)
                break;
            vis[a[i]] = 1;
            mx = max(mx, a[i]);
            if(mx == n-i && mp[i][n-i]==1){
                ans.push_back(pii(i, n-i));
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].f<<" "<<ans[i].s<<endl;
        }
        mp.clear();
    }
}

