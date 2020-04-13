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

using namespace std;
int vis[200009], cnt[200009];

int main()
{
    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n;
        cin>>n;

        int a[n], dis = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt[a[i]]++;
            if(vis[a[i]] == 0){
                vis[a[i]] = 1;
                dis++;
            }
        }
        int mx = 0;
        sort(a, a+n);

        for(int i=0;i<n;i++){
            if(cnt[a[i]] == dis)
                mx = max(mx, dis-1);
            else if(cnt[a[i]] > dis)
                mx = max(mx, dis);
            else if(cnt[a[i]] == dis-1)
                mx = max(mx, dis-1);
            else
                mx = max(mx, cnt[a[i]]);
        }
        cout<<mx<<endl;

        memset(vis, 0, sizeof(vis));
        memset(cnt, 0, sizeof(cnt));
    }
}


