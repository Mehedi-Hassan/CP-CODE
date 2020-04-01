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

        int a[n], ans = -1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2 == 0)
                ans = i;
        }

        if(ans != -1){
            cout<<1<<endl<<ans+1<<endl;
            continue;
        }
        int l = -1, r= -1;
        for(int i=0;i<n;i++){
            if(a[i]%2){
                if(l == -1)
                    l = i+1;
                else{
                    r = i+1;
                    break;
                }

            }
        }

        if(l == -1 || r == -1){
            cout<<-1<<endl;
            continue;
        }
        cout<<r-l+1<<endl;
        for(int i=l;i<=r;i++)
            cout<<i<<" ";
        cout<<endl;

    }
}

