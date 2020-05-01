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


int vis[1000];
int main()
{
    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n, k;
        cin>>n>>k;

        int a[n];
        vector<int>ans;
        mem(vis);

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(vis[a[i]] == 0){
                vis[a[i]] = 1;
                ans.pb(a[i]);
            }
        }

        if(ans.size() > k){
            cout<<-1<<endl;
        }
        else{
            while(ans.size() != k){
                ans.pb(1);
            }
            int sz = ans.size();
            sort(ans.begin(), ans.end());
            cout<<sz*n<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<sz;j++){
                    cout<<ans[j]<<" ";
                }
            }
            cout<<endl;
        }

    }
}


