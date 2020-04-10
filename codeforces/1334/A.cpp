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
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }

        int done = 1;
        if(a[0] < b[0])
            done = 0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1] || b[i]<b[i-1] || a[i]<b[i]){
                done = 0;
                break;
            }
            else if(a[i]-a[i-1] < b[i]-b[i-1]){
                done = 0;
                break;
            }
        }

        if(done){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

