#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll r,x,y,p,q;
    cin>>r>>x>>y>>p>>q;
    double d=sqrt((x-p)*(x-p) + (y-q)*(y-q));
//    cout<<sqrt((x-p)*(x-p) + (y-q)*(y-q))<<endl;
    ll ans=d/((double)r*2.0);
//    cout<<ans<<endl;
    if(ans*r*2 != d){
        ans++;
    }
    cout<<ans;

}
