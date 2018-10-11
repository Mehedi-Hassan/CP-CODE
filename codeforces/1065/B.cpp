
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n ,m;
    cin>>n>>m;

//    m = 10 * (10 -1) / 2 - 1;
    ll b = ceil((1.0 + sqrt(1.0 + 8.0 *(double)m)) / 2.0);
    b = n - b;
    if(b < 0) b =0;

    ll a = n - 2*m;
    if(a<0) a = 0;

    if(m == 0) b = n;
    cout<<a <<" " << b;


}
