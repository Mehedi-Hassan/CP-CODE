#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+9];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

//    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    int z=0,nidx,f=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            z++;
            continue;
        }
        if(a[i]>0){
            cout<<a[i]<<" ";
            f=1;
        }
        else if(a[i]<0 && a[i+1]<0 && i+1<n){
            f=1;
            cout<<a[i]<<" "<<a[i+1]<<" ";
            ++i;

        }
    }
    if(f==0){
        if(z) cout<<0;
        else cout<<a[0];
    }
}
