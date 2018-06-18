#include <bits/stdc++.h>

using namespace std;
long long a[27];
int main() {
    long long n,k;
    cin>>n>>k;
    char s[n+2];
    for(int i=0;i<n;i++){
        cin>>s[i];
        a[s[i]-'A']++;
    }
    sort(a,a+26,greater<int>());
    long long ans=0;
    for(int i=0;k>0;i++){
        if(a[i]<=k) {
            ans+=a[i]*a[i];
            k-=a[i];
        }
        else{
            ans+=k*k;
            k=0;
        }
        
    }
    cout<<ans;
}
