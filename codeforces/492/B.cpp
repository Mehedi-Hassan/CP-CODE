#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    double a[n+9];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    double ans=max(a[0],l-a[n-1]);
    for(int i=0;i<n;i++){
        ans=max(ans,(a[i+1]-a[i])/2);
    }
    printf("%.10lf",ans);
}
