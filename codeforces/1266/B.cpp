#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll x = n/7;
        if(x%2 == 0 && n%7 != 0 && n>7){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

