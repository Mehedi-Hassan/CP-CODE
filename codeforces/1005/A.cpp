#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,st=0,a[1005],idx=0;
    cin>>n;
    int x[n+6];
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]==1){
            st++;
            if(i>0)
                a[idx++]=x[i-1];
        }
    }
    a[idx++]=x[n-1];
    cout<<st<<endl;
    for(int i=0;i<idx;i++) cout<<a[i]<<" ";
}
