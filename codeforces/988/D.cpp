#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld ", a)
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
    int n;
//    cin>>n;
    sf(n);

    ll a[n];
    for(int i=0;i<n;i++){
//        cin>>a[i];
        sfl(a[i]);
//        vis[a[i]] = 1;
    }

    ll d = 1;
    sort(a, a+n);
    vector<ll>v;

    for(int k=1;k<=32;k++){
//        cout<<d<<endl;
        for(int i=0;i<n;i++){

            if(binary_search(a, a+n, a[i]-d) == 1 && binary_search(a, a+n, a[i]+d) == 1){
//                cout<<3<<endl;
                pf(3);
                printf("\n");
//                cout<<a[i]-d<<" "<<a[i]<<" "<<a[i]+d;
                pfl(a[i]-d);
                pfl(a[i]);
                pfl(a[i]+d);
                return 0;
            }
            if(v.size() >= 1)
                continue;
            if(binary_search(a, a+n, a[i]-d) == 1){
                v.push_back(a[i]-d);
                v.push_back(a[i]);
            }
            if(binary_search(a, a+n, a[i]+d) == 1){
                v.push_back(a[i]+d);
                v.push_back(a[i]);
            }
        }
        d = d << 1;
    }

    if(v.size() >= 1){
//        cout<<2<<endl;
        pf(2);
        printf("\n");
//                cout<<a[i]-d<<" "<<a[i]<<" "<<a[i]+d;
        pfl(v[0]);
        pfl(v[1]);
//        pfl(a[i]+d);

//        cout<<v[0]<<" "<<v[1];
        return 0;
    }

    pf(1);
    printf("\n");
//                cout<<a[i]-d<<" "<<a[i]<<" "<<a[i]+d;
    pfl(a[0]);
}

//4
//77621890 -103413146 -182427753 18687384

//4
//20 4 20 2
