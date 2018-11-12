#include<bits/stdc++.h>
using namespace std;
#define ll        long long

int p[100009];
vector< ll > prime;


void sieve()
{
    p[2] = 0;
    prime.push_back(2);

    for(int i=4; i<= 100009; i+=2)
        p[i] = 1;


    for(int i=3;i<= 400; i+=2){
        if(p[i] == 0){
            for(int j= i*i; j<=10009; j+=2*i){
                p[j] = 1;

            }
        }
    }

    for ( int i = 3; i <= 100009; i += 2 )
        if ( p[i] == 0 ) prime.push_back(i);


}
int main()
{
    ll n;
    cin>>n;

    if(n%2 ==0){
        cout<<n/2;
    }
    else{
        sieve();


        for(int i=1; i<prime.size(); i++){
            if( n%prime[i] ==0){
                n-= prime[i];

                cout<< n/2 + 1;
                return 0;
            }
        }

        cout<<1;
    }
}
