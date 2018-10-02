#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int a[n+9], mn = 1000000009, mx = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];

        mn= min(a[i], mn);
        mx= max(a[i], mx);
    }


    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i] == mn || a[i] == mx){
            ans++;
        }
    }

    cout<<max(0,n - ans);
}
