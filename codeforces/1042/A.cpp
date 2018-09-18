#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mn=0,mx=0;
    cin>>n>>m;
    int a[n+9];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    mx=a[n-1]+m;
    for(int i=0;i<m;i++){
        a[0]++;
        sort(a,a+n);
    }
    sort(a,a+n);
    mn=a[n-1];
    cout<<mn<<" "<<mx;
}
