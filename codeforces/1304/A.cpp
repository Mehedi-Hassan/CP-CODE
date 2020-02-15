#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int T;
    cin>>T;

    while(T--){
        ll x, y, a, b;
        cin>>x>>y>>a>>b;

        ll ans = (y-x)/(a+b);
        if(ans*(a+b) == (y-x)){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}

