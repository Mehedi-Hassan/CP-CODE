
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(n%(2*k+1)>k || n%(2*k+1)==0){
        int l=n/(2*k+1);
        if(n%(2*k+1)) l++;
        cout<<l<<endl;
        for(int i=k+1;i<=n;i+=2*k +1) cout<<i<<" ";
    }
    else{
        int l=n/(2*k+1);
        if(n%(2*k+1)) l++;
        cout<<l<<endl;
        int e=(2*k+1)*(n/(2*k+1) + 1) -k;
        for(int i=k+1-(e-n);i<=n;i+=2*k +1) cout<<i<<" ";
    }
}
