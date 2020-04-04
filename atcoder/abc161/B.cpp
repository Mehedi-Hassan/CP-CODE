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
    int n, m;
    cin>>n>>m;

    int a[n];
    ll tot = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        tot += a[i];
    }
    sort(a, a+n, greater<int>());
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//        tot += a[i];
//    }
    if(a[m-1]*4*m < tot){
        cout<<"No\n";
    }
    else
        cout<<"Yes\n";
}

