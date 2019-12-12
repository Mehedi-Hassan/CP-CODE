#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
map<char, int>valo;
ll fun(ll x)
{
    return x*(x+1)/2;
}
int main()
{
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    char ch;
    for(int i=0;i<k;i++){
        cin>>ch;
        valo[ch]=1;
    }
    vector<ll>v;
    v.push_back(-1);
    int d=0;
    for(ll i=0;i<n;i++){
        if(valo[s[i]] == 0)
            v.push_back(i);
    }
    v.push_back(n);
    int sz=v.size();
    ll ans= 0;
    for(int i=0;i<sz-1;i++){
        ans += fun(v[i+1]-v[i]-1);
    }
//    if(d==0){
//        cout<<0<<endl;
//        return 0;
//    }
    cout<<ans<<endl;
}
