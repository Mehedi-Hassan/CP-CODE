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
int cnt[200009];

int main()
{
    FASTIO;
    int n, k, x, y;
    cin>>n>>k;

    int a[n+9], b[n+9];

    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a, a+n);

    for(int i=0;i<k;i++){
        cin>>x>>y;
        x--;
        y--;
        if(b[x]>b[y])
            cnt[x]++;
        else if(b[y]>b[x])
            cnt[y]++;
    }

    for(int i=0;i<n;i++){
        x = lower_bound(a, a+n, b[i]) - a;
        cout<<x-cnt[i]<<" ";
    }
}


