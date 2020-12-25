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

ll ara[MX];

int main()
{
    optimize
    int t;
    cin>>t;
    while(t--){
        ll n, m, a, b;
        cin>>n>>m>>a>>b;

        for(int i = 0; i < m; i++){
            cin>>ara[i];
        }

        ll futabe, time;
        if(a < b){
            futabe = b-a-1;
            time = b-1;
        }
        else{
            futabe = a-b-1;
            time = n-b;
        }

        sort(ara, ara+m);
        ll ans = 0, p = 1;
        for(int i = min(futabe-1, m-1); i >= 0; i--){
            if(ara[i]+p <= time){
                ans++;
                p++;
            }
        }
        cout<<ans<<endl;
    }
}
