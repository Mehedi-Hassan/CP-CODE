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
        ll a,b;
        cin>>a>>b;

        ll d = a/b;
        if(a%b == 0){
            cout<<0<<endl;
            continue;
        }

        cout<<(d+1)*b-a<<endl;
    }
}

