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
//    FASTIO

    int t;
    cin>>t;

    while(t--){
        int n, k, d = 0;
        cin>>n>>k;

        int a[n+9];

        vector<int>id;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == k){
                d = 1;
            }
        }

        if(d == 0){
            cout<<"no\n";
            continue;
        }
        if(n==1 && a[0]==k){
            cout<<"yes\n";
            continue;
        }
        d = 0;
        for(int i=0;i<n-2;i++){
            int cnt = 0;
            if(a[i]>=k)
                cnt++;
            if(a[i+1]>=k)
                cnt++;
            if(a[i+2]>=k)
                cnt++;

            if(cnt>=2){
                d = 1;
                break;
            }
        }

        if(a[n-1]>=k && a[n-2]>=k)
            d = 1;

        if(d == 1){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }

}



