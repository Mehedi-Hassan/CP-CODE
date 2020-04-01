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

    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            cout<<i<<n/i;
            return 0;
        }
    }
}

