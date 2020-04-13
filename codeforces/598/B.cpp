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

    string s, t;
    cin>>s;

    int m, l, r, k, sz;
    cin>>m;

    for(int i=0;i<m;i++){
        cin>>l>>r>>k;
        l--;
        r--;
        sz = r-l+1;
        t = s;
        for(int j=l;j<=r;j++){
            t[l + (j-l+k)%sz] = s[j];
//            cout<<j + (j-l+k)%sz<<" ";
        }
        s = t;
//        cout<<s<<endl;
    }
    cout<<s;
}


