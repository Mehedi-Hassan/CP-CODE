//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx,avx2,fma")
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define PI              acos(-1.0)
#define No              cout<<"No\n"
#define Yes             cout<<"Yes\n"
#define no              cout<<"no\n"
#define yes             cout<<"yes\n"
#define NO              cout<<"NO\n"
#define YES             cout<<"YES\n"
#define MOD             (int)1000000007
#define int             long long
#define ll              long long
#define dl              double
#define pii             pair<int, int>
#define fi              first
#define se              second
#define sf(a)           scanf("%lld", &a)
#define pf(a)           printf("%lld ", a)
#define pfn(a)          printf("%lld\n", a)
#define case(a)         cout<<"Case "<<a<<": ";
#define FASTIO          ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define pb              push_back
#define mem(arr)        memset(arr, 0, sizeof(arr))
#define mem1(arr)       memset(arr, -1, sizeof(arr))
#define all(a)          a.begin(),a.end()
#define f(i,a,b)        for (int i = a; i<=b; i++)
#define fr(i,a,b)       for (int i = a; i>=b; i--)
#define rr              return 0
#define prec(n)         fixed<<setprecision(n)
#define maxpq           priority_queue<int>
#define minpq           priority_queue<int, vector<int>, greater<int> >
#define inf             (int)(1e18)
#define vi              vector<int>
#define vii             vector<pii>
#define sz(s)           s.size()
#define lcm(a,b)        (a*(b/gcd(a,b)))

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr << '\n'; }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << " "; err(++it, args...); }



signed main()
{
//    root = new trinode();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    FASTIO
    

    
    
    int T;
    cin>>T;

    while(T--){
        int n, m;
        cin>>n>>m;

        string s;
        cin>>s;

        int l[n+1], r[n+2], x = 0, lmn[n+1], lmx[n+1], rmx[n+2], rmn[n+2];
        s = "#" + s;

        int mx = 0, mn = 0;
        l[0] = lmn[0] = lmx[0] = 0;
        f(i, 1, n){
            if(s[i] == '+') x++;
            else x--;

            l[i] = x;
            mx = max(mx, x);
            mn = min(mn, x);

            lmx[i] = mx;
            lmn[i] = mn;
        }

        x = 0, mx = 0, mn = 0;
        r[n+1] = rmn[n+1] = rmx[n+1] = 0;
        fr(i, n, 1){
            if(s[i] == '+') x--;
            else x++;

            r[i] = x;
            mx = max(mx, x);
            mn = min(mn, x);

            rmx[i] = mx;
            rmn[i] = mn;
        }

        while(m--){
            int st, en;
            cin>>st>>en;

            int a, b, c, d;
            
            a = lmn[st-1];
            b = lmx[st-1];

            c = rmn[en+1];
            d = rmx[en+1];

            // error(a, b, c, d);

            b = max(b, l[st-1] + d-r[en+1]);
            a = min(a, l[st-1] - r[en+1]+c);

            cout<<b-a+1<<endl;
        }


    }
    
    
    
    
    
    


//    tridel(root);
}





