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
    FASTIO;
    int n, w;
    cin>>n>>w;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int left = 10000000, right = -10000000, sum = 0, l=0, r=w;
    for(int i=0;i<n;i++){
        sum += a[i];
        left = min(left, sum);
        right = max(right, sum);
    }
    if(left<0)
        l = abs(left);
    if(right>w || left<-w){
//        r = 2*w - right;
        cout<<0;
        return 0;
    }
    r = min(r, w - right);


    cout<<max(0, r-l+1);
}

