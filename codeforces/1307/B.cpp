#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int T;
    cin>>T;

    while(T--){
        int n, d;
        cin>>n>>d;

        int a[n+9], ans = 1000000009;
//        cout<<ans<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == d){
                ans = 1;
            }
        }
        if(ans == 1){
            cout<<ans<<endl;
            continue;
        }
        sort(a, a+n);
        if(a[n-1] > d){
            cout<<2<<endl;
            continue;
        }
        if(d%a[n-1] == 0)
            cout<<d/a[n-1]<<endl;
        else
            cout<<d/a[n-1] + 1<<endl;

    }
}

