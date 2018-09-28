#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[1000];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    sort(a,a+n);
    int ans=0,cnt=0;

    for(int i=0;i<n;i++){
        if(a[i]>=0 || cnt==m)
            break;
        ans+=a[i];
        cnt++;
    }
    cout<<-ans;
}
