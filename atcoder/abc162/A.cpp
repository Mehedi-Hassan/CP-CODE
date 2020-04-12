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

    int n;
    cin>>n;

    while(n){
        if(n%10 == 7){
            cout<<"Yes";
            return 0;
        }
        n /= 10;
    }
    cout<<"No";
}

