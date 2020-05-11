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

int n, m, k;
int a[200005];

int find(int pos)
{
    int used = 0, baki = k;
    for(int i=pos;i<n;i++){
        if(baki - a[i]>=0){
            baki-=a[i];
        }
        else{
            used++;
            if(used>=m){
                return 0;
            }

            baki = k;
            baki -= a[i];
        }
    }
    return 1;
}
int main()
{
    FASTIO

    cin>>n>>m>>k;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int l=0, r= n-1, x, ans = 0;
    while(l<=r){
        x = (l+r)/2;
        if(find(x)){
            ans = max(ans, n-x);
//            cout<<x<<" "<<ans<<endl;
            r = x-1;
        }
        else{
            l = x+1;
        }
    }

    cout<<ans;
}



