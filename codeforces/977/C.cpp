#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,k;
    ll a[200008];
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(k==0)
    {
        if(a[0]==1)
        cout<<-1;
        else
            cout<<--a[0];
    }
        else if(a[k-1]==a[k]) cout<<-1;
    else cout<<a[k-1];
}

