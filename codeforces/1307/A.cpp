#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int T;
    cin>>T;

    while(T--){
        int n, d;
        cin>>n>>d;

        int a[n+9];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans = a[0], dn = 0;
        for(int i=1;i<n;i++){
            if(dn == 1){
                break;
            }
            while(a[i]){
                d -= i;
                if(d >= 0 && a[i]>=0){
                    ans++;
                    a[i]--;
                }
                else{
                    dn = 1;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}

