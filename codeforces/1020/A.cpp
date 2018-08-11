#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    while(k--){
        int ans=0,ta,fa,tb,fb;
        cin>>ta>>fa>>tb>>fb;
        ans+=abs(ta-tb);
        if(ta==tb){
            cout<<abs(fa-fb)<<endl;
            continue;
        }
//        cout<<"ANS1 "<<ans<<endl;
        if((a<=fa && fa<=b) || (a<=fb && fb<=b))
            ans+=abs(fb-fa);
        else if(fa<a && fb<a){
            ans+=abs(a-fa);
            ans+=abs(a-fb);
        }
        else if (fa>b && fb>b){
            ans+=abs(fa-b);
            ans+=abs(fb-b);
        }
        else if((fa<a && fb>b) || (fb<a || fa>b)) ans+=abs(fb-fa);
        cout<<ans<<endl;
    }
}

