#include<bits/stdc++.h>
#define pii     pair<int, int>

using namespace std;
int main()
{
//    while(1){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector< pii > a;
        int l, r;
        for(int i=0; i<n;i++){
            cin>>l>>r;
            a.push_back(pii(l, r));
        }
        sort(a.begin(), a.end());

        int x = 2000000000;
        for(int i=0;i<n-1;i++){
            if(a[i].second < x && a[i].second<a[n-1].first){
                x = a[i].second;
            }
        }
        if(x == 2000000000){
            cout<<0<<endl;
        }
        else{
            cout<<a[n-1].first - x<<endl;
        }
    }
}
//}
