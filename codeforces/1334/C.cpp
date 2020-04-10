#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)

using namespace std;
int main()
{
    int t;
//    cin>>t;
    sf(t);

    for(int tc = 1;tc<=t; tc++){
        int n;
//        cin>>n;
        sf(n);

        ll a[n], b[n], z = 0;
        for(int i=0;i<n;i++){
//            cin>>a[i]>>b[i];
            sfl(a[i]);
            sfl(b[i]);
        }

        ll sum = 0;
        for(int i=1;i<n;i++){
            if(a[i] > b[i-1])
                sum += a[i]-b[i-1];
        }
        if(a[0] > b[n-1])
            sum += a[0]-b[n-1];
//        sum += max(z, a[0]-b[n-1]);

        ll ans = 1;
        ans = (ans<<63) - 1;
//        cout<<ans<<endl;
        for(int i=1;i<n;i++){
            if(a[i] > b[i-1]){
                ans = min(ans, sum + b[i-1]);
//                ans = min(ans, sum - a[i] + b[i-1] + a[i]);
            }
            else{
                ans = min(ans, sum + a[i]);
            }
        }

        if(a[0]>b[n-1]){
            ans = min(ans, sum + b[n-1]);
        }
        else{
            ans = min(ans, sum + a[0]);
        }

//        cout<<ans<<endl;
        pfl(ans);
    }
}

