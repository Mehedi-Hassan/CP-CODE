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



int main()
{
    FASTIO

    int n;
    cin>>n;

    string a, b;
    cin>>a>>b;

    int ans = 0;
    for(int i=0, j=n-1;i<=j;i++,j--){
        if(i==j){
            if(a[i]!=b[i])
                ans++;
        }
        else if((a[i]==a[j] && b[i]==b[j]) || (a[i]==b[j] && b[i]==a[j]) || (a[i]==b[i] && b[j]==a[j]))
            continue;
//        else if((b[i]==b[j] && a[i]!=a[j]) || (a[i]==b[j] && a[j]!=b[i]) || (a[i]!=b[j] && a[j]==b[i]))
//            ans++;
//        else if(a[i]==a[j] && b[i]!=b[j]){
//            if(a[i]==b[i] || a[i]==b[j])
//                ans++;
//            else
//                ans+=2;
//        }
        else if(a[i]==b[i] || a[j]==b[j] || a[i]==b[j] || a[j]==b[i] || b[i]==b[j])
            ans++;
        else
            ans+=2;
    }
    cout<<ans;
}



