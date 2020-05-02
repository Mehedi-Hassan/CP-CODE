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
    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        ll n;
        cin>>n;

        if(n == 3){
            cout<<"1\n1"<<endl;
            continue;
        }

        if(n == 2){
            cout<<"1\n0"<<endl;
            continue;
        }
        ll sum = 1, d= 1;
        vector<int>ans;
        ans.pb(1);

        while(1)
        {
            if(n < sum+4*d){
//                if(!ans.empty())
//                    ans.pop_back();

//                for(ll i=d;i<=2*d;i++){
//                    if(n-sum-i <= 2*i){
//                        ans.pb(i);
//                        if(n-sum-i > 0)
//                            ans.pb(n-sum-i);
//                        break;
//                    }
//                }

                ll l = d, r= 2*d, i;

                while(l <= r){
                    i = (l+r)/2;
                    if(i <= n-sum-i && n-sum-i <= 2*i){
                        ans.pb(i);
                        if(n-sum-i > 0)
                            ans.pb(n-sum-i);
                        break;
                    }

                    if(n-sum-i > 2*i)
                        l = i;
                    else
                        r = i;
                }
                break;
            }

            d *= 2;
            sum += d;
            ans.pb(d);

            if(sum+d<=n && n<=sum+d*2){
                ans.pb(n-sum);
                break;
            }
        }

        cout<<ans.size()-1<<endl;
        n = ans.size();
        for(int i=1;i<n;i++){
            cout<<ans[i]-ans[i-1]<<" ";
//            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}



