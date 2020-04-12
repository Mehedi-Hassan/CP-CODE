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
    int n;
    cin>>n;

    string s;;
    cin>>s;

    int r[n], g[n], b[n], rc = 0, gc = 0, bc = 0;
    for(int i=n-1;i>=0;i--){
        if(s[i] == 'R')
            rc++;
        if(s[i] == 'G')
            gc++;
        if(s[i] == 'B')
            bc++;

        r[i] = rc;
        g[i] = gc;
        b[i] = bc;
    }

    ll ans = 0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(j+1 < n){
                if((s[i]=='R' && s[j]=='G') || (s[i]=='G' && s[j]=='R')){
                    ans += b[j+1];
                    if(j+j-i<n){
                        if(s[j+j-i] == 'B')
                            ans--;
                    }
                }

                if((s[i]=='R' && s[j]=='B') || (s[i]=='B' && s[j]=='R')){
                    ans += g[j+1];
                    if(j+j-i<n){
                        if(s[j+j-i] == 'G')
                            ans--;
                    }
                }

                if((s[i]=='B' && s[j]=='G') || (s[i]=='G' && s[j]=='B')){
                    ans += r[j+1];
                    if(j+j-i<n){
                        if(s[j+j-i] == 'R')
                            ans--;
                    }
                }

            }
        }
    }
    cout<<ans;
}

