#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
//    while(1){
    int t;
    cin>>t;

    while(t--){
        ll a, b, k;
        cin>>a>>b>>k;
        if(a>b)
            swap(a,b);
        ll g = __gcd(a,b);

        if(b+g+a*(k-1) < 2*b){
            cout<<"REBEL\n";
        }
        else{
            cout<<"OBEY\n";
        }
    }
}
//}
