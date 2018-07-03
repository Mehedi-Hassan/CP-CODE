#include<bits/stdc++.h>
using namespace std;
int cnt[106];
int main()
{
    int n,mx=0;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
        mx=max(mx,cnt[a[i]]);
    }
    cout<<mx;
}
