
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,k;
    scanf("%I64d %I64d",&n,&k);
        if(n%2) n++;
        if(k<=n/2) cout<<k*2 -1;
        else cout<<(k-n/2)*2;
    return 0;
}
