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
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n, x, y;
        cin>>n;

        deque<int>a;
        for(int i=0;i<n;i++){
            cin>>x;
            a.pb(x);
        }

        int sum = a.front();
        a.pop_front();
        int cnt = 1, d= 1;

        x = sum, y = 0;
        while(!a.empty()){
            int tot = 0;
            if(d == 0){
                while(tot<=sum && !a.empty()){
                    tot += a.front();
                    x += a.front();
                    a.pop_front();
                }
                sum = tot;
            }
            else{
                while(tot<=sum && !a.empty()){
                    tot += a.back();
                    y += a.back();
                    a.pop_back();
                }
                sum = tot;
            }
            d = abs(d-1);
            cnt++;
        }
        cout<<cnt<<" "<<x<<" "<<y<<endl;
    }


}



