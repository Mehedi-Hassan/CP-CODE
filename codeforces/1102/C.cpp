#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int n, x ,y;
    cin>>n>>x>>y;

    int a[n+9];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int ans = 0;
    if(x<=y){
        for(int i=0;i<n;i++){
            if(a[i]<=x)
            ans++;
        }
        cout<<ans/2 + ans%2<<endl;
    }
    else{
        cout<<n;
    }
}
