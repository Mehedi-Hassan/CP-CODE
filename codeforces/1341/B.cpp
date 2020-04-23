#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

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
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n, k;
        cin>>n>>k;

        int a[n], vis[n], tot[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                vis[i] = 0;
                if(i==0)
                    tot[i] = 0;
                else
                    tot[i] = tot[i-1]+vis[i];
            }
            else{
                if(a[i-1]<a[i] && a[i]>a[i+1]){
                    vis[i] = 1;
                }
                else
                    vis[i] = 0;
                tot[i] = tot[i-1]+vis[i];
            }
        }

        int ans = tot[k-1];
        if(vis[k-1])
            ans--;
        int l = 1;

        for(int i=1;i<=n-k;i++){
            int x = tot[i+k-1] - tot[i-1];
            if(vis[i+k-1])
                x--;
            if(vis[i])
                x--;
            if(x > ans){
                ans = x;
                l = i+1;
            }
        }

        cout<<ans+1<<" "<<l<<endl;
    }
}



