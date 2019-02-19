#include<bits/stdc++.h>
#define     ll       long long

using namespace std;

int main()
{
    int q;
    cin>>q;

    ll n,a,b;

    while(q--){
        cin>>n>>a>>b;

        if(2*a <= b){
            cout<<n*a<<endl;;
        }
        else{
            cout<<(n/2)*b + (n%2)*a<<endl;
        }
    }
}
