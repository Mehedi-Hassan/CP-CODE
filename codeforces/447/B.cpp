#include<bits/stdc++.h>
using namespace std;
int n,a[28],mx=0;
int sum(int n){
    return n*(n+1)/2;
}
int main()
{
    string s;
    cin>>s;
    cin>>n;
    for(int i=0;i<26;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int ans=0;
    ans+=mx*(sum(n+s.size())-sum(s.size()));
    for(int i=0;i<s.size();i++){
        ans+=a[s[i]-'a']*(i+1);
    }
    cout<<ans;
}
