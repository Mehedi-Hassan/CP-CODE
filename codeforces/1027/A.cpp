#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n/2;i++){
            if(abs(s[i]-s[n-1-i])==2 || abs(s[i]-s[n-1-i])==0){
                ans=1;
            }
            else{
                ans=0;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
