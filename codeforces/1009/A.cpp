#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c[n+6],a[m+6];
    for(int i=0;i<n;i++) cin>>c[i];
    for(int i=0;i<m;i++) cin>>a[i];
    int idx=0;
    for(int i=0;i<n && idx<m;i++){
        if(a[idx]>=c[i]){
            idx++;
        }
    }
    cout<<idx;
}
