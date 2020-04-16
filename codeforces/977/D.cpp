#include<bits/stdc++.h>
#define ll      unsigned long long
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
map<ll, int>mp;

int main()
{
    FASTIO;

    int n;
    cin>>n;

    ll a[n], cnt = n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a, a+n);
    vector<ll>q;
    q.push_back(a[0]);
    cnt--;
    mp[a[0]]--;

    while(1){
        ll x = q[q.size()-1];
        if(mp[x*2]){
            x *= 2;
            q.push_back(x);
            mp[x]--;
            cnt--;
        }
        else if(x%3==0 && mp[x/3]){
            x /= 3;
            q.push_back(x);
            mp[x]--;
            cnt--;
        }
        else{
            break;
        }
    }
    while(1){
        ll x = q[0];
//        cout<<x<<endl;
        if(mp[x*3]){
            x *= 3;
            q.insert(q.begin(), x);
            mp[x]--;
            cnt--;
        }
        else if(x%2==0 && mp[x/2]){
            x /= 2;
            q.insert(q.begin(), x);
            mp[x]--;
            cnt--;
        }
        else{
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<q[i]<<" ";
    }


}


