#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    ll n ,m;
    cin>>n>>m;
    ll a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b, b+n);
    ll cnt, ans = 9000000000;
    for(int i=0;i<n;i++){
        ll d = b[i]-a[0];
        if(d<0)
            d += m;
        cnt = 0;
        for(int j=i;cnt<n;j++, cnt++){
            ll d2 = b[j%n]-a[j-i];
            if(d2<0)
                d2 += m;
            if(d != d2)
            break;
        }
//        cout<<i<<" "<<cnt<<endl;
        if(cnt == n){
            ans = min(ans, d);
        }
    }
    cout<<ans;
}

