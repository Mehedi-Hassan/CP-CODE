#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int n;
    cin>>n;

    ll a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>v;
    for(int i=0;i<n;i++){
        cin>>b[i];
        a[i] -= b[i];
        v.push_back(a[i]);
    }

    sort(v.begin(), v.end());
    ll ans = 0, x;
    for(int i=0;i<n;i++){
        if(v[i]<=0){
            x = lower_bound(v.begin()+i+1, v.end(), -v[i]+1) - v.begin();
            x = n-x;
        }
        else{
            x = n-i-1;
        }

        ans += x;
    }
    cout<<ans;

}


