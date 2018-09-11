#include<bits/stdc++.h>
using namespace std;
int hl[100009];
int main()
{
    int n;
    cin>>n;
    int h[n+9],a[n+9];
    for(int i=0;i<n;i++){
        cin>>h[i]>>a[i];
        hl[h[i]]++;
    }
    for(int i=0;i<n;i++){
        h[i]=n-1+hl[a[i]];
        a[i]=2*(n-1) - h[i];
        cout<<h[i]<<" "<<a[i]<<endl;
    }
}
