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

const ll MX = 1e6 + 105;

bool chk[MX];
vector <int> prime;
void sieve(int n)
{
    int i, j;
    chk[1] = 1;
    for(i = 4; i <= n; i += 2) chk[i] = 1;
    for(i = 3; ll(i)*ll(i) <= ll(n); i += 2){
        if(chk[i]) continue;
        for(j = i*i; j <= n; j += i) chk[j] = 1;
    }
    for(int i = 2; i <= n; i++) if(!chk[i]) prime.pb(i);
    ///O(n*log2(log2(n))
}

int notlonely[MX];

int main()
{
//    optimize
    int n;
    sieve(1e6+5);
    int t;
    scanf("%d", &t);
//    cin>>t;
    while(t--){
        scanf("%d", &n);

//        for(int i = 0; i < 10; i++) cout<<prime[i]<<' ';
//        cout<<endl;

        int p = sqrt(n)+1;
        int l = lower_bound(prime.begin(), prime.end(), p)-prime.begin();
        int u = lower_bound(prime.begin(), prime.end(), n)-prime.begin();
        if(prime[u] > n) u--;

//        error(u, l, prime[u], prime[l], sqrt(n)+1);
        printf("%d\n", u-l+1+1);
    }
}
