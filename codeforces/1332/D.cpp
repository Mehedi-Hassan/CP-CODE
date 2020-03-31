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
    int k;
    cin>>k;
    if(k ==0){
        cout<<1<<" "<<1<<endl;
        cout<<1;
        return 0;
    }

    int a = 1;
    a = a << 18;
    a--;
    int b = 1;
    b = b << 17;

    cout<<2<<" "<<3<<endl;
    cout<<a<<" "<<b-1<<" "<<b-k-1<<endl;
    cout<<b<<" "<<a<<" "<<b-1;

}

