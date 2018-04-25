#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,s,p,ans;
    cin>>k>>n>>s>>p;
    ans=n/s;
    if(n%s) ans++;
    ans*=k;
    if(ans%p) ans=ans/p +1;
    else ans=ans/p;
    cout<<ans;
}
