#include<bits/stdc++.h>
using namespace std;
#define ll                long long


int main()
{
    int t;
    cin>>t;

    while(t--){
        long long a,b,k, ans;

        cin>>a>>b>>k;


        if(k%2 == 0){
            k/=2;
            ans = (a-b) * k ;
            cout<<ans <<endl;
        }
        else{
            k/=2;
            ans = (a-b) * k ;
            cout<< ans + a <<endl;
        }
    }


}
