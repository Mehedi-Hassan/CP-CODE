#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pldi    pair<long double, int>
#define ang       first
#define id       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const double eps = 1e-15;
const double pi = acos(-1);

bool Equal(double x, double y)
{
    return fabs(x-y)<eps; ///x==y
}

bool Greater(double x, double y)
{
    return x-eps>y; ///x>y
}

bool Lesser(long double x, long double y)
{
    return x+eps<=y; ///x>y
}

struct point
{
    long double x, y, ang;
    int id;
};

bool cmp(point a, point b)
{
    return Lesser(a.ang,b.ang);
}


using namespace std;
int main()
{
    FASTIO;
//    double p = 135.63999945446287, q = 135.63999860838052;
//    double rr = p-q;
//    printf("%.20lf\n", rr);

    int n;
    cin>>n;

    vector<pldi>a;
    long double x, y;
    for(int i=0;i<n;i++){
        cin>>x>>y;

        a.push_back(pldi(atan2(x,y), i+1));
//        printf("%.15lf\n", a[i].ang);
    }
    sort(a.begin(), a.end());
//    for(int i=0;i<n;i++){
//        printf("%d      %.25lf\n",i,  a[i].ang);
//
//    }
    long double twopi = 2.0*pi;
    long double mn = twopi + 0.1, dif;
    int l, r;
    for(int i=1;i<n;i++){
//        printf("%d      %3.25lf\n",i,  a[i].ang);
//        printf("%d      %3.25lf\n",i-1,  a[i-1].ang);
//        printf("%d        %.25lf\n\n",i,  a[i].ang-a[i-1].ang);
        dif = a[i].ang-a[i-1].ang;

        if(dif <= mn){
            mn = dif;
            l = i, r= i-1;
        }

    }
//    printf("%.25lf\n", a[0].ang+ 360.0 - a[n-1].ang);
    dif = a[0].ang+ twopi - a[n-1].ang;

    if(dif <= mn){
        mn = dif;
        l = 0, r = n-1;
    }

    cout<<a[l].id<<" "<<a[r].id;

}

