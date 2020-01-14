#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
ll a, b;

int main()
{
    int t;
    cin>>t;

    while(t--){
        cin>>a>>b;
        ll ans = 0, x = 9;
        while(x <= b){
            ans += a;
            x *= 10;
            x += 9;
        }
        cout<<ans<<endl;
    }
}

