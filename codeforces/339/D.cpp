
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

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


vector<int>a[29];
int main()
{
    FASTIO;
//    int t;
//    cin>>t;
//
//    for(int tc = 1; tc<=t; tc++){
    ll sz, m, x;
    cin>>sz>>m;


    ll n = 1<<sz;
//    cout<<n<<endl;

    for(int i=0;i<n;i++){
        cin>>x;
        a[0].push_back(x);
    }
    ll d = 0;
    for(int i=1;i<=sz;i++){
//        cout<< (n>>i) <<endl;
        for(int j=0;j< n>>i;j++){

            if(d == 0)
                a[i].push_back(a[i-1][2*j] | a[i-1][2*j+1]);
            else
                a[i].push_back(a[i-1][2*j] ^ a[i-1][2*j+1]);

//            cout<<a[i][j]<<" ";
        }
        d = abs(d-1);
//        cout<<endl;
    }
//    cout<<"hvjbjhvjhbjv       "<<a[sz][0]<<endl;
    ll p, b, pre, prep;

    while(m--){
        cin>>p>>b;
        p--;
        prep = p;
        pre = a[0][p];
        a[0][p] = b;
        ll d = 0;
        for(int i=1;i<=sz;i++){
            p /= 2;
            if(d == 0)
                a[i][p] = (a[i-1][2*p] | a[i-1][2*p+1]);
            else
                a[i][p] = (a[i-1][2*p] ^ a[i-1][2*p+1]);

            d = abs(d-1);
        }
        cout<<a[sz][0]<<endl;


//        p = prep;
//        a[0][p] = pre;
//        d = 0;
//        for(int i=1;i<=sz;i++){
//            p /= 2;
//            if(d == 0)
//                a[i][p] = (a[i-1][2*p] | a[i-1][2*p+1]);
//            else
//                a[i][p] = (a[i-1][2*p] ^ a[i-1][2*p+1]);
//
//            d = abs(d-1);
//        }
    }

//    }
}
