#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[30];
int main()
{
    string s;
    int n,k;
    cin>>n>>k;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;i++){
        a[s[i]-'A']++;
    }
    int mn=a[0],idx=0;
    for(int i=0;i<k;i++){
        if(a[i]<mn){
            mn=a[i];
            idx=i;
        }
    }
    int cnt=mn*k,ans=0;
    cout<<cnt<<endl;
//    for(int i=0;i<k;i++){
//        a[i]=mn;
//    }
//    int i;
//    for(i=n-1;i>=0;i--){
//        if((s[i]-'A')==idx) break;
//    }
//    for(;i>=0;i--){
//        a[s[i]-'A']--;
//        if(a[s[i]-'A']>=0){
//            cnt--;
//        }
//        ans++;
//        if(cnt==0) break;
//    }
//    cout<<ans;
}
