#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
//#define s       second
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

struct node
{
    int s, d, c, id;
};

bool cmpend(node a, node b)
{
    if(a.d == b.d)
        return a.s < b.s;
    return a.d < b.d;
}
int main()
{
    FASTIO;
    int n, m;
    cin>>n>>m;

    int t[n];
    memset(t, 0, sizeof(t));

    node a[m];

    for(int i=0;i<m;i++){
        cin>>a[i].s>>a[i].d>>a[i].c;
        a[i].s--;
        a[i].d--;

        a[i].id = i;
        t[a[i].d ] = m+1;
    }

    sort(a, a+m, cmpend);

    for(int i=0;i<m;i++){
        for(int j=a[i].s; j<a[i].d; j++){
            if(t[j] == 0){
                t[j] = a[i].id+1;
                a[i].c--;
                if(a[i].c == 0)
                    break;
            }
        }
        if(a[i].c > 0){
//            cout<<a[i].s<<" "<<a[i].d<<endl;
            cout<<-1;
            return 0;
        }
    }

    for(int i=0;i<n;i++)
        cout<<t[i]<< " ";
}


