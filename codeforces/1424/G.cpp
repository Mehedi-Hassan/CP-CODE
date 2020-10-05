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

const ll MX = 2e5 + 105;

map <ll, ll> cnt;
map <ll, bool> visited;

int main()
{
    optimize
    int n;
    cin>>n;

    vector <int> ara;
    for(int i = 0; i < n; i++){
        int b, d;
        cin>>b>>d;
        cnt[b]++;
        cnt[d]--;
        if(!visited[b]){
            ara.push_back(b);
            visited[b] = 1;
        }
        if(!visited[d]){
            ara.push_back(d);
            visited[d] = 1;
        }
    }

    sort(ara.begin(), ara.end());
    ll ans = cnt[ara[0]], year = ara[0];
    for(int i = 1; i < ara.size(); i++){
        cnt[ara[i]] += cnt[ara[i-1]];

//        error(ara[i], cnt[ara[i]]);
        if(cnt[ara[i]] > ans){
            ans = cnt[ara[i]];
            year = ara[i];
        }
    }
    cout<<year<<' '<<ans<<endl;
}
