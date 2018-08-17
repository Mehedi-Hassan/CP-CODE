#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m+7];
    for(int i=0;i<m;i++)
        cin>>a[i];
    ll pos=1,ans=0;
    for(int i=0;i<m;i++){
        if(a[i]>=pos){
            ans+=a[i]-pos;
        }
        else{
            ans+=n-pos+a[i];
        }
        pos=a[i];
    }
    cout<<ans;
}
