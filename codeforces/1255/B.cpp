#include<bits/stdc++.h>
using namespace std;
#define pii     pair<int, int>
#define ll      long long

int main()
{
//    while(1){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;
        int x;
        vector< pii > v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(pii(x, i+1));
        }
        sort(v.begin(), v.end());
        if(n == 2 || m<n ){
            cout<<-1<<endl;
            continue;
        }
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans += v[i].first;
        }
        ans *= 2;
        ans += (m-n)*(v[0].first+v[1].first);
        cout<<ans<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i].second<<" "<<v[(i+1)%n].second<<endl;
        }
        for(int i=0;i<m-n;i++){
            cout<<v[0].second<<" "<<v[1].second<<endl;
        }
    }

}
//}
