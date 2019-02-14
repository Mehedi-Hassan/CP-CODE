#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;

    ll a[n+9], vis[n+9];

    memset(vis, 0, sizeof(vis));

    vector<int> x, y;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a, a+n);

    ll ans = 1;
    for(int i=0;i<n-1;i++){
        if(a[i] == a[i+1]){
            ans = ans* a[i] / __gcd(ans, a[i]);

            x.push_back(a[i++]);
//            y.push_back(a[++i]);

            vis[i] = vis[i-1] = 1;
        }
    }

    for(int i=0;i<n;i++){
        if(a[n-1] % a[i] )
            ans = ans* a[i] / __gcd(ans, a[i]);
    }

    cout<<a[n-1] << " "<< ans;

//    for(int i=0;i<x.size();i++){
//        cout<<x[i]<<" ";
//    }
//    cout<<endl;
//
//    for(int i=0;i<x.size();i++){
//        cout<<y[i]<<" ";
//    }
//    cout<<endl;



}
