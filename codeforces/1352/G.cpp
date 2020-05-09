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
        int n;
        cin>>n;
        if(n<=3){
            cout<<-1<<endl;
            continue;
        }

        vector<int>l, r;
        for(int i=2;i<=n;i+=2){
            l.pb(i);
        }

        for(int i=1;i<=n;i+=2){
            r.pb(i);
        }
        reverse(r.begin(), r.end());
        int a=l.size(), b=r.size();

        swap(l[a-2], l[a-1]);
        if(2<=abs(l[a-1]-r[0]) && abs(l[a-1]-r[0])<=4){
            for(int i=0;i<a;i++)
                cout<<l[i]<<" ";
            for(int i=0;i<b;i++)
                cout<<r[i]<<" ";
            cout<<endl;
        }
        else{
            swap(l[a-2], l[a-1]);
            swap(r[0], r[1]);
            for(int i=0;i<a;i++)
                cout<<l[i]<<" ";
            for(int i=0;i<b;i++)
                cout<<r[i]<<" ";
            cout<<endl;
        }
    }
}



