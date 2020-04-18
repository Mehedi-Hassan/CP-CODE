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

bool cmp(string a, string b)
{
    return a.size() < b.size();
}
int main()
{
    FASTIO;
    int n;
    cin>>n;

    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    sort(s,s+n, cmp);

    for(int i=1;i<n;i++){
        if(s[i].find(s[i-1]) == string::npos){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

}


