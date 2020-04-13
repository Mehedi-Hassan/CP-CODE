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
        int n, a, b;
        cin>>n>>a>>b;

        int cnt = a/b, ct;
        char c;
        string s;
        for(int i=0;i<b;i++){
            ct = cnt;
            c = 'a' + i;
            while(ct--){
                s += c;
            }
        }

//        cout<<s<<endl;
        cnt = a - cnt*b;
        c = 'a' + (b - 1);
        while(cnt--){
            s += c;
        }
//        cout<<s<<endl;

        string ans;
        while(n > ans.size()){
            ans += s;
        }

        for(int i=0;i<n;i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
}


