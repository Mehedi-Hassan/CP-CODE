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

        int a[n], b[n], st[n][5], min1 = 0, zero = 0, one = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == -1)
                min1 = 1;
            if(a[i] == 1)
                one = 1;
            else
                zero = 1;
            st[i][0] = min1;
            st[i][1] = zero;
            st[i][2] = one;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int ans = 1;
        for(int i=n-1;i>0;i--){
            if(a[i] < b[i]){
                if(st[i-1][2] == 0){
                    ans = 0;
                    break;
                }
            }
            if(a[i] > b[i]){
                if(st[i-1][0] == 0){
                    ans = 0;
                    break;
                }
            }
        }
        if(a[0] != b[0])
            ans = 0;
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}

