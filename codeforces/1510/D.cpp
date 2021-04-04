#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr << '\n'; }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << " "; err(++it, args...); }

#define        optimize           ios::sync_with_stdio(0); cin.tie(0);
#define PI    acos(-1.0)
#define pb push_back
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define RESET(a, b) memset(a, b, sizeof(a))
#define pii pair <int, int>
#define gcd(a, b) __gcd(a, b)
#define min3(a, b, c) min(c, min(a, b))
#define max3(a, b, c) max(c, max(a, b))

const double eps = 1e-9;
inline bool Equal(double x, double y) { return fabs(x-y)<eps; }

const ll MX = 1e5 + 105;
const double inf = 2e18 + 105;

ll n, d;
ll ara[MX];
double dp[MX][12];
bool vis[MX][12];

double func(ll pos, ll pro)
{
//    error(pos, pro);
    double &res = dp[pos][pro];
    bool &done = vis[pos][pro];
    if(done) return res;

    done = 1;
    if(pos == n){
        if(pro == d) res = 0;
        else res = -inf;
        return res;
    }

    ll cur;
    cur = pro*ara[pos];

    res = -inf;
    double p; //= func(pos+1, cur%10);
    double q;// = func(pos+1, pro%10);
    double val = log(p)+log((double)ara[pos]);
//    error(ara[pos], val, p);
//    error(log(ara[pos]));

    res = max(res, (p = func(pos+1, cur%10))+log(ara[pos]));
    res = max(res, (q = func(pos+1, pro%10)));
//    error(pos, pro, p, q, res);
    return res;

}

vector <ll> fin;
void track(ll pos, ll product, double res)
{
    if(pos == n+1) return;

    ll pro;
    pro = product*(ara[pos]%10);

    double x = dp[pos+1][pro%10];
    double y = dp[pos+1][product%10];
//    error(pos, ara[pos], log(ara[pos]), x, y, res, x+log(ara[pos]));
//    error(pro, product);

    if(Equal(x+log(ara[pos]) , res)){
        fin.push_back(ara[pos]);
        track(pos+1, pro%10, res-log(ara[pos]));
    }
    else{
        track(pos+1, product%10, res);
    }
}

int main()
{
    optimize
    cin>>n>>d;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>ara[i];
    }
//    sort(ara, ara+n, greater <ll> ());

//    RESET(dp, -1);
    double ans = func(0, 1);
//    error(ans);
//    error(log(8));
    if(ans < 0){
        cout<<-1<<endl;
    }
    else{
        track(0, 1, ans);
        if(fin.size() == 0){
            cout<<-1<<endl;
            return 0;
        }
        cout<<fin.size()<<endl;
        for(auto x: fin) cout<<x<<' ';
        cout<<endl;
    }
}
