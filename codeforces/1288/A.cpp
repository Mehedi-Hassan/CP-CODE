#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
ll n, d;
ll fun(ll x)
{
    if(d%(x+1) == 0){
        return x + d/(x+1);
    }
    else
        return x + d/(x+1) + 1;
}
int main()
{
    int t;
    cin>>t;

    while(t--){

        cin>>n>>d;
        ll pre = 90000000000, ans = -1;
        for(int i=0;i<=d;i++){
            if(fun(i) > pre){
                break;
            }
            pre = fun(i);
            if(fun(i) <= n){
                ans = i;
                break;
            }
        }
        if(ans == -1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}

