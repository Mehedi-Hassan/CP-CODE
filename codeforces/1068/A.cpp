#include<bits/stdc++.h>
using namespace std;

#define ll       long long

int main()
{
    ll n,m,k,l;
    cin>>n>>m>>k>>l;

    ll sum, each = n/m;

    if(each == 0 && k<l){
        cout<<-1;
        return 0;
    }

    sum = n - n%m;
    if(sum-k < l){
        cout<<-1;
        return 0;
    }

    each = l/m;
    if(l%m)
        each++;

    sum = each * m;

    if(sum-k >= l){
        cout<<each;
        return 0;
    }

    each = (k+l)/m;
    if((k+l) %m)
        each++;

    sum = each * m;

    cout<<each;
}
