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

map<ll, ll>r;

int main()
{
    FASTIO;

    ll n, m;
    cin>>n>>m;

    ll a[n], id = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == m)
            id = i;
    }

    ll cnt = 0, ans = 0;
    r[0]++;

    for(int i=id+1;i<n;i++){
        if(a[i]<m)
            cnt--;
        else
            cnt++;
        r[cnt]++;
//        cout<<cnt<<" "<<r[cnt]<<endl;
    }

    cnt = 0;
    for(int i=id;i>=0;i--){
        if(a[i]<m)
            cnt--;
        else if(a[i]>m)
            cnt++;
        ans += r[-cnt];
        ans += r[-cnt+1];
    }
    cout<<ans;

}



