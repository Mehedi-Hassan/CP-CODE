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
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;
int main()
{
    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a, a+n);

        for(int i=n-n/2-1, j=n/2;i>=0 && j<n;i--, j++){
            cout<<a[j]<<" ";
            if(i != j)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
//2
//5
//5 -2 4 6 3
//4
//8 1 4 2


