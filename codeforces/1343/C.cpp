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





using namespace std;
int main()
{
//    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n;
        cin>>n;

        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll mx= -2e9, d = 0, ans = 0;

        if(n == 1){
            cout<<a[0]<<endl;
            continue;
        }
        if(a[0]<0)
            d = 1;
        for(int i=0;i<n-1;i++){
            if(d == 0 && a[i]<0){
                mx = -2e9;
                d = 1;
            }
            if(d==1 && a[i]>0){
                mx = 0;
                d = 0;
            }

            mx = max(a[i], mx);

            if((a[i]<0 && a[i+1]>0) || (a[i]>0 && a[i+1]<0))
                    ans += mx;
        }

        if((a[n-2]<0 && a[n-1]>0) || (a[n-2]>0 && a[n-1]<0))
            ans += a[n-1];
        else if(a[n-1] > mx){
            ans += a[n-1];
        }
        else{
            ans += mx;
        }
        cout<<ans<<endl;
    }
}


