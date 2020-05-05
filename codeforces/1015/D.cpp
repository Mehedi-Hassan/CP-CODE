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



int main()
{
    FASTIO

    ll n, k, s;
    cin>>n>>k>>s;

    if(s>(n-1)*k || k>s){
        cout<<"NO";
        return 0;
    }

    int d = 0;
    vector<ll>ans;
//    ans.pb(1);

    while(s>0){
        if(d == 0){
            if(s>=n-1)
            ans.pb(n), s-=n-1;

            else
                ans.pb(1+s), s= 0;
        }
        else{
            if(s>=n-1)
            ans.pb(1), s -= n-1;

            else
                ans.pb(n-s),s = 0;
        }

        d = abs(d-1);
//        cout<<ans[ans.size()-1]<<" ";
    }

//    cout<<endl;
    ll sz = ans.size();
    ll sz2 = sz;
//    if(baki%2 == 1){
//        if(ans[sz-1])
//    }
    d = 0;
    ll cnt = 2;
//    cout<<sz2<<endl;
    cout<<"YES\n";
    for(int i=0;i<sz;i++){
        if(sz2 == k){
            cout<<ans[i]<<" ";
        }
        else{
            while(sz2 != k){
                sz2++;
                cout<<cnt<<" ";
                if(cnt == ans[i]){
                    sz2--;
                    d = abs(d-1);
                    i++;
                }
                if(d == 0)
                    cnt++;
                else
                    cnt--;
            }
            i--;
        }
    }

}




//10 19 47


