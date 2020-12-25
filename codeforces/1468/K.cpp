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

int n;
string str;

bool check(int a, int b)
{
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'L'){
            if(x-1 == a && y == b){
                continue;
            }
            x--;
        }
        if(str[i] == 'R'){
            if(x+1 == a && y == b){
                continue;
            }
            x++;
        }
        if(str[i] == 'U'){
            if(x == a && y+1 == b){
                continue;
            }
            y++;
        }
        if(str[i] == 'D'){
            if(x == a && y-1 == b){
                continue;
            }
            y--;
        }
    }
    if(!x && !y) return 1;
    return 0;
}

int main()
{
    optimize
    int t;
    cin>>t;
    while(t--){
        cin>>str;
        n = str.size();

        bool yes = 1;
        int x = 0, y = 0;
        vector <pii> ara;
        for(int i = 0; i < n; i++){
            if(str[i] == 'L') x--;
            if(str[i] == 'R') x++;
            if(str[i] == 'U') y++;
            if(str[i] == 'D') y--;

            ara.push_back({x, y});
        }

        bool done = 0;
        for(auto x: ara){
            if(check(x.first, x.second)){
                cout<<x.first<<' '<<x.second<<endl;
                done = 1;
                break;
            }
        }
        if(!done){
            cout<<0<<' '<<0<<endl;
        }
    }
}
