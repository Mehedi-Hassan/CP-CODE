#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,mx="-1",t;
    cin>>s;
    int l=s.size(),ans=0,cnt=0;
    for(int i=0;i<l-1;i++){
        if((s[i]-'0')%2==0 ){
            ans++;
        }
    }
    for(int i=0;i<l-1;i++){
        if((s[i]-'0')%2==0 ){
            cnt++;
            if(s[i]<s[l-1] || cnt==ans){
                swap(s[i],s[l-1]);
                cout<<s;
                return 0;
            }
        }
    }
    cout<<-1;
//    t=s;
//    swap(t[b],t[l-1]);
//    mx=max(mx,t);
//    cout<<mx;
//    for(int i=0;i<l-1;i++){
//        t=s;
//        if((t[i]-'0')%2==0 && t[i]<t[l-1]){
//            swap(t[i],t[l-1]);
//            mx=t;
//            break;
//        }
//    }
//    if(mx!="-1"){
//        cout<<mx;
//        return 0;
//    }
//    for(int i=l-2;i>=0;i--){
//        t=s;
//        if((t[i]-'0')%2==0 && t[i]>t[l-1]){
//            swap(t[i],t[l-1]);
//            mx=max(mx,t);
//            break;
//        }
//    }
//    cout<<mx;
}
