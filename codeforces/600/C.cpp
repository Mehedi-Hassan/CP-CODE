#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
//#define s       second
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

map<char, int>cnt;

int main()
{
    FASTIO;

    string s;
    cin>>s;

    int n = s.size();
    for(int i=0;i<n;i++){
        cnt[s[i]]++;
    }

    for(char i='a';i<='z';i++){
        if(cnt[i]%2){
            for(int j='z';j>i;j--){
                if(cnt[j]%2){
                    cnt[j]--;
                    cnt[i]++;
                    break;
                }
            }
        }
    }

    s = "";
    int x;
    for(char i='a';i<='z';i++){
        if(cnt[i] > 0){
            x = cnt[i]/2;
            while(x--)
                s += i;
        }
    }
    cout<<s;
    for(char i='a';i<='z';i++){
        if(cnt[i]%2 == 1){
            cout<<i;
        }
    }

    reverse(s.begin(), s.end());
    cout<<s;
}


