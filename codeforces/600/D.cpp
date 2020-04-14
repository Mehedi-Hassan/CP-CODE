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
const long double eps = 1e-9;
const long double pi = acos(-1);

bool Equal(long double x, long double y)
{
    return fabs(x-y)<eps; ///x==y
}

bool Greater(long double x, long double y)
{
    return x-eps>y; ///x>y
}

bool Lesser(long double x, long double y)
{
    return x+eps<y; ///x>y
}

struct point
{
    long double x, y, ang;
};





using namespace std;
int main()
{
//    FASTIO;



    ll x1, y1, r1, x2, y2, r2;

    cin>>x1>>y1>>r1;
    cin>>x2>>y2>>r2;
    if(r1<r2){
        swap(r1, r2);
        swap(x1, x2);
        swap(y1, y2);
    }

    ll c1c2 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

    cout<<setprecision(10)<<fixed;

    long double ans = 0.0, rr1, rr2;
    if(c1c2 >= (r1+r2)*(r1+r2)){
        printf("0.000000000000");
        return 0;
    }
    else if(c1c2 <= (r1-r2)*(r1-r2)){
        cout<< pi * (long double)r2 * (long double)r2;
        return 0;
    }

    long double d = sqrt((long double)c1c2);
    rr1 = r1, rr2 = r2;
//    cout<<d<<" "<<rr1<<" "<<rr2<<endl;
    long double th2 = acos((rr2*rr2 + d*d - rr1*rr1)/(2*rr2*d));
    long double th1 = acos((rr1*rr1 + d*d - rr2*rr2)/(2*rr1*d));
//    cout<<th1<<" "<<th2<<endl;
    long double s = th1*rr1*rr1;
    long double t = rr1*rr1*sin(th1)*cos(th1);
    ans += s-t;

    s = th2*rr2*rr2;
    t = rr2*rr2*sin(th2)*cos(th2);
//    ans += s-t;
    if(d < r1){

        t = rr2*rr2*sin(pi - th2)*cos(pi - th2);
        ans += s+t;
    }
    else{
        ans += s-t;
    }
    cout<<ans;
//    printf("%.10Lf", ans);
}


