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

map<string, int>stoii;
map<int, string>iitos;

int main()
{
//    FASTIO;

    int n, cnt = 1, sum = 0;
    cin>>n;

    string s[n];
    int a[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        sum += s[i].size() + 1;
        if(stoii[s[i]] == 0){
            stoii[s[i]] = cnt;
            iitos[cnt++] = s[i];
        }
        a[i] = stoii[s[i]];
//        cout<<a[i]<<" ";
    }
//    cout<<endl;
    sum--;
    int ans = sum;
    for(int sz=1;sz<=n/2;sz++){
        for(int i=0; i<=n-(2*sz); i++){
            cnt = 1;
            for(int j=i+sz;j<=n-sz;j++){
//                cout<<sz<<" "<<i<<" "<<j<<endl;
                int d = 0;
                for(int x=0;x<sz;x++){
                    if(a[i+x] != a[j+x]){
                        d = 1;
                        break;
                    }
                }
                if(d == 0){
                    cnt++;
                    j += sz-1;
                }

            }
            int tsz = 0;
            for(int j=i;j<i+sz;j++){
                tsz += iitos[a[j]].size() + 1;
            }
            tsz--;
            if(cnt > 1){
//                if(sum - tsz*cnt+sz < ans)
//                    cout<<i<<" "<<sz<<" "<<sum - tsz*cnt+sz*cnt<<" "<<tsz<<" "<<cnt<<" "<<endl;
                ans = min(ans, sum - tsz*cnt+sz*cnt);
            }
        }
    }

    cout<<ans;
}

//300
//to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be or not to be to be


//300
//u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u u
