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
        ll a[3], ans = 0;
        cin>>a[0]>>a[1]>>a[2];
        while(a[1]>0){
            sort(a, a+3);
            ll x = a[1] - a[0];
            ans += x;
            a[1] -= x;
            a[2] -= x;
            x = min(a[1], a[2]/2 + a[2]%2);
            a[2] -= x;
            a[1] -= x;
            ans += x;
            x = min(a[0], a[2] - a[2]%2);
            a[2] -= x;
            a[0] -= x;
            ans += x;
            sort(a, a+3);
        }


//        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        cout<<ans<<endl;
    }
}
//}

