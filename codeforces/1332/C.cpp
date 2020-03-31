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
map<char , int>cnt;
int main()
{
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans = 0;
        for(int i=0;i<k/2+k%2;i++){
            cnt.clear();
            int mx = 0;
            for(int j=i;j<n;j+=k){
                mx = max(mx, ++cnt[s[j]]);
            }
            if(k%2 && i==k/2){
                ans += n/k - mx;
                continue;
            }
            for(int j=n-1-i;j>=0;j-=k){
                mx = max(mx, ++cnt[s[j]]);
            }
            ans += n/k*2 - mx;
        }
        cout<<ans<<endl;
    }
}
