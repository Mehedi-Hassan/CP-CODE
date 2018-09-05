#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,b;
    cin>>n>>w>>b;
    int a[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(a[i]!=a[j]){
            if((a[i]==0 && a[j]==2) || (a[i]==2 && a[j]==0))
                ans+=w;
            else if((a[i]==1 && a[j]==2) || (a[i]==2 && a[j]==1))
                ans+=b;
            else if((a[i]==0 && a[j]==1) || (a[i]==1 && a[j]==0)){
                cout<<-1;
                return 0;
            }
        }
        else if(a[i]==2 && a[j]==2){
            ans+=2*min(w,b);
            if(i==j) ans-=min(w,b);
        }

    }
    cout<<ans;
}
