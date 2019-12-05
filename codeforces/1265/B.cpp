#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;

        vector<pii>a;
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(pii(x,i));
        }
        sort(a.begin(), a.end());
        int mn=a[0].s, mx=a[0].s;
        cout<<1;
        for(int i=1;i<n;i++){
            mn = min(mn, a[i].s);
            mx = max(mx, a[i].s);
            if(-mn+mx+1 == i+1)
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }
}

