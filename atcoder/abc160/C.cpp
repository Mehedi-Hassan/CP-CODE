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
//    int t;
//    cin>>t;
//
//    for(int tc = 1;tc<=t; tc++){
//
//    }
    int k, n;
    cin>>k>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans = a[n-1] - a[0];
    for(int i=1;i<n;i++){
        ans = min(ans, k-a[i] + a[i-1]);
    }
    cout<<ans;
}



