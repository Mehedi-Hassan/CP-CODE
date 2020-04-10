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
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n;
        double x;
        cin>>n>>x;

        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n, greater<int>());

        ll sum = 0, ans = 0;
        for(ll i=0;i<n;i++){
            sum += a[i];
            double avg = (double)sum/(i+1);
            if(avg>=x){
                ans = i+1;
            }

        }
        cout<<ans<<endl;
    }
}

