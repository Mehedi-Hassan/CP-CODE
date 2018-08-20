#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+8];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int pos=0,ans=0;
    for(int i=0;i<n;i++){
        ans+=abs(a[i]-pos);
        pos=a[i];
        ans++;
    }
    ans+=n-1;
    cout<<ans;
}
