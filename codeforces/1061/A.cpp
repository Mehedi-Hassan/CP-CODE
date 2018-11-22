#include<bits/stdc++.h>
using namespace std;

#define   ll        long long

int main()
{

    ll s,n;

    cin>>n>>s;

    int cnt = 0;
    while(s){

        cnt += s/n;
        s = s%n;

        n = min(--n, s);

    }

    cout<<cnt;
}
