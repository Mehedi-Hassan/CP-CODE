#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,ans=0;
    int a[6]={100,20,10,5,1};
    cin>>n;
    while(n){
        ans+=n/a[i];
        n%=a[i];
        if(a[i]>n) i++;
    }
    cout<<ans;
    return 0;
}
