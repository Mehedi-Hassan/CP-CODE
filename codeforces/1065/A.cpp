#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll s,a,b,c, n;
        cin>>s>>a>>b>>c;

        n = s/c;

        a = n/a;

        cout<< n+ a*b<<endl;

    }
}
