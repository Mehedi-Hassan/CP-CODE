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



int main()
{
    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        string s;
        cin>>s;

        int n = s.size(), d = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                d = 1;
                break;
            }
        }
        if(d == 0){
            cout<<s<<endl;
            continue;
        }
        d = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                d = 1;
                break;
            }
        }
        if(d == 0){
            cout<<s<<endl;
            continue;
        }

        for(int i=0;i<n;i++){
            cout<<"10";
        }
        cout<<endl;
    }
}



