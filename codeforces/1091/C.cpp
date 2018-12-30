#include<bits/stdc++.h>
using namespace std;
#define ll long long

map< ll, int > vis;

int main()
{
    int n;
    cin>>n;

    vector<ll > v, ans;

    int sq = sqrt(n)+1;

    for(int i=1; i<=sq; i++){
        if(n%i == 0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }

    sort(v.begin(), v.end());

    int sz = v.size();
    for(int i=0;i<sz;i++){
        ll x = n/v[i] - 1;

        x = x+1 + v[i]*x*(x+1)/2;
        if(vis[x] == 0)
        ans.push_back(x);

        vis[x] = 1;
    }

    sort(ans.begin(), ans.end());

    sz = ans.size();
    for(int i=0; i<sz; i++){
        cout<<ans[i]<<" ";
    }
}
