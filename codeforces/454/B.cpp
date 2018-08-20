#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0,l=0,i;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            i++;
            ans++;
            break;
        }
        else l++;
    }
    for(;i<n-1;i++){
        if(a[i]<=a[i+1]) ans++;
        else break;
    }
    if(i!=n-1) cout<<-1;
    else{
        if(a[n-1]<=a[0]){
            cout<<ans;
        }
        else if(ans==0 && l==n-1) cout<<0;
        else{
            cout<<-1;
        }
    }
}
