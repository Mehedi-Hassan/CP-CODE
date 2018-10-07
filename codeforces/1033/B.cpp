#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    ll a,b;

    while(t--){
        cin>>a>>b;

        if( a-b == 1 ){
            a = a+b;
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }
        ll sqr = sqrt(a);


        int d = 0;
        for(ll i =2; i<=sqr +1;i++){
            if(a%i == 0){
            cout<<"NO"<<endl;
            d = 1;
            break;
            }
        }
        if(d ==0)
        cout<<"YES"<<endl;
    }
}

