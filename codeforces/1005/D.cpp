#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

#define ll              long long
#define pii             pair<int, int>
#define f               first
#define s               second
#define sf(a)           scanf("%d", &a)
#define sfl(a)          scanf("%lld", &a)
#define pf(a)           printf("%d ", a)
#define pfl(a)          printf("%lld\n", a)
#define Case(a)         printf("Case %d: ", a)
#define FASTIO          ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define pb              push_back
#define mp              make_pair
#define mem(arr)        memset(arr, 0, sizeof(arr))
#define mem1(arr)       memset(arr, -1, sizeof(arr))

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

int vis[200009];

int main()
{
    FASTIO;

    string s;
    cin>>s;

    int n = s.size(), cnt = 0;
    s += "00";

    for(int i=0;i<n;i++){
        s[i] = '0' + (s[i]-'0')%3;
    }
    for(int i=0;i<n;i++){
//        s[i] = '0' + (s[i]-'0')%3;
//        cout<<s[i];
        if(s[i] == '0'){
//            vis[i] = 1;
            cnt++;
        }
        else{
            if(s[i] == '1'){
                if(s[i+1] == '2'){
                    cnt++;
                    i++;
                }
                else if(s[i+1] == '1' && s[i+2]=='1'){
                    cnt++;
                    i+=2;
                }
            }
            else{
                if(s[i+1] == '1'){
                    cnt++;
                    i++;
                }
                else if(s[i+1]=='2' && s[i+2] == '2'){
                    cnt++;
                    i+=2;
                }
            }
        }
    }

    cout<<cnt;

}



