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
        ll n, k;
        cin>>n>>k;

        ll num;
        ll l, r;
        string s;
        for(ll i=1;i<=100000;i++){
            num = i*(i+1)/2;
            if(k<=num){
                l = i;
                r = l - (num - k) - 1;

                for(int j=0;j<n;j++){
                    if(j == l || j == r)
                        s += 'b';
                    else
                        s += 'a';
                }
                break;
            }
        }
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
}

