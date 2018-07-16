#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n+8];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2) cout<<a[i]<<" ";
        else cout<<a[i]-1<<" ";
    }
}
