#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define inf 2000000000
#define infLL 2000000000000000000
#define MAX5 100005
#define MAX6 1000006
#define MAX7 10000007
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sfs(a) scanf("%s", a)
#define sline(a) scanf("%[^\n]%*c", a);
#define pf(a) printf("%d\n", a)
#define pfl(a) printf("%lld\n", a)
#define pfs(a) printf("%s\n", a)
#define Case(t) printf("Case %d: ", t)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mod 1000000007
#define Mod 998244353
#define PI acos(-1.0)
#define eps 1e-9
#define mem(a, b) memset(a, b, sizeof(a))
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

const int N = MAX5;

bool isPalindrome(string s)
{
    int l = 0;
    int r = s.size() - 1;
    while(r > l) {
        if(s[l++]!=s[r--]) {
            return false;
        }
    }
    return true;
}

int main()
{
    //#ifndef ONLINE_JUDGE
    //    freopen("in.txt","r",stdin);
    //    freopen("out.txt","w",stdout);
    //#endif

    FASTIO;
    int n;
    cin>>n;
    int m = n * 2;
    vector<int>a(m + 1), b(m + 1);
    for(int i = 1; i <= m; i++) {
        cin>>a[i];
        b[i] = i;
    }
    vector<int>p[m + 1];
    int cnt = 0;
    for(int i = 1; i <= m; i++) {
        if(i & 1) {
            for(int j = 1; j <= m; j+=2) {
                swap(b[j], b[j + 1]);
            }
        }
        else {
            for(int j = 1; j <= n; j++) {
                swap(b[j], b[j + n]);
            }
        }
        for(int j = 1; j <= m; j++) {
            p[i].push_back(b[j]);
        }
        bool flag = true;
        for(int j = 0; j < m; j++) {
            if(p[i][j]!=j+1) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cnt = i;
            break;
        }
    }
    // for(int i = 1; i <= cnt; i++) {
    //     for(int j = 0; j < m; j++) {
    //         cout<<p[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int ans = -1;
    for(int i = 1; i <= cnt; i++) {
        bool flag = true;
        for(int j = 0; j < m; j++) {
            if(p[i][j]!=a[j+1]) {
                flag = false;
                break;
            }
        }
        if(flag) {
            ans = min(i, cnt - i);
            break;
        }
    }
    
    cout<<ans<<endl;

    return 0;
}
