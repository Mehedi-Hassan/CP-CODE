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


map<char, int>cnt;

int main()
{
    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        sort(s.begin(), s.end());
        if(s[0] != s[k-1]){
            cout<<s[k-1]<<endl;
            continue;
        }

        int d = 0;
        cnt.clear();
        for(int i=0;i<n;i++){
            cnt[s[i]]++;
        }
        int dist = 0;
        for(char i='a'; i<='z';i++){
            if(cnt[i]) dist++;
//            if(cnt[i]%k != 0){
//                d = 1;
//            }
        }

//        if(d == 1){
            if(s[0] == s[n-1]){
//                cnt[s[0]]/=k;
                int x = cnt[s[0]]/k;
                if(cnt[s[0]]%k)
                    x++;
                for(int i=0;i<x;i++){
                    cout<<s[0];
                }
                cout<<endl;
                continue;
            }

            if(dist == 2 && s[k]!=s[0]){
                cout<<s[0];
//                cnt[s[n-1]]/=k;
                int x = cnt[s[n-1]]/k;
                if(cnt[s[n-1]]%k)
                    x++;

                for(int i=0;i<x;i++){
                    cout<<s[n-1];
                }
                cout<<endl;
                continue;
            }
            cout<<s[0];

            for(int i=k;i<n;i++){
                cout<<s[i];
            }
            cout<<endl;
//        }
//        else{
//            for(char i='a';i<='z';i++){
//                cnt[i]/=k;
//                while(cnt[i]--){
//                    cout<<i;
//                }
//            }
//            cout<<endl;
//        }
    }
}

