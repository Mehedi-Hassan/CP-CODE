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

int dx[5] = {+1, +0, -1, -0};
int dy[5] = {+0, +1, -0, -1};

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
    FASTIO

    int n, r;
    cin>>n>>r;

    int a[n], cnt[n], ans = 0;
    mem(cnt);

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 1){
            ans++;
            for(int j=max(0, i-r+1);j<=min(n-1, i+r-1);j++){
                cnt[j]++;
            }
        }

    }

    for(int i=0;i<n;i++){
//        cout<<cnt[i]<<" ";
        if(cnt[i] == 0){
            cout<<-1;
            return 0;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i] == 1){
            int d = 0;
            for(int j=max(0, i-r+1);j<=min(n-1, i+r-1);j++){
                if(cnt[j]==1){
                    d = 1;
                    break;
                }
            }
            if(d == 0){
                ans--;
                for(int j=max(0, i-r+1);j<=min(n-1, i+r-1);j++){
                    cnt[j]--;
                }
            }
        }
    }

    cout<<ans;

}



