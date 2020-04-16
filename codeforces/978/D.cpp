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
    int n;
    cin>>n;

    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    if(n<=2){
        cout<<0;
        return 0;
    }

    int ans = n+9;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            a[0] = b[0]+i;
            a[1] = b[1]+j;
            int d = a[1]-a[0];
            int cnt = 0, done = 0;
            if(i != 0) cnt++;
            if(j != 0) cnt++;

            for(int k=2;k<n;k++){
                a[k] = a[k-1] + d;
//                if(i == 1 && j == -1)
//                    cout<<a[i]<<" "<<b[i]<<endl;
                if(a[k]-b[k]==0)
                    continue;
                if(a[k]-b[k]==1 || a[k]-b[k]==-1)
                    cnt++;
                else{
                    done = 1;
                    break;
                }
            }

//            cout<<i<<" "<<j<<" "<<cnt<<" "<<done<<endl;
            if(done == 0){
                ans = min(ans, cnt);
            }
        }
    }
    if(ans != n+9)
        cout<<ans;
    else
        cout<<-1;
}


