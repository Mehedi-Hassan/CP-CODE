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

map<int, vector<pii> >tot;
int main()
{
    FASTIO;
    int n, m;
    cin>>n;

    int sz[n], sum[n];
    vector<int>a[n];

    for(int i=0;i<n;i++){
        cin>>sz[i];
        sum[i] = 0;
        for(int j=0;j<sz[i];j++){
            cin>>m;
            a[i].push_back(m);
            sum[i] += m;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<sz[i];j++){
            if(tot[sum[i] - a[i][j]].size() == 1){
                if(tot[sum[i] - a[i][j]][0].f != i+1){
                    tot[sum[i] - a[i][j]].push_back(pii(i+1, j+1));
                }
            }

            if(tot[sum[i] - a[i][j]].size() == 0){
                tot[sum[i] - a[i][j]].push_back(pii(i+1, j+1));
            }

            if(tot[sum[i] - a[i][j]].size() >= 2){
                cout<<"YES"<<endl;

                cout<<tot[sum[i] - a[i][j]][0].f<<" "<<tot[sum[i] - a[i][j]][0].s<<endl;
                cout<<tot[sum[i] - a[i][j]][1].f<<" "<<tot[sum[i] - a[i][j]][1].s<<endl;
                return 0;
            }
        }
    }
    cout<<"NO";
}



