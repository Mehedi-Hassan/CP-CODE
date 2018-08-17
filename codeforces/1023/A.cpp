#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,f=-1;
    cin>>n>>m;
    string s,t,s1,t1,s2,t2;
    cin>>s>>t;
    for(int i=0;i<n;i++){
        if(s[i]=='*') f=i;
    }
    int i,j;
    if(n-m>1){
        cout<<"NO";
        return 0;
    }
    if(f==-1){
        if(s==t){
            cout<<"YES";
        }
        else cout<<"NO";
    }
    else{
//        int cnt=0;
        s1=s.substr(0,f);
        t1=t.substr(0,f);
        if(s1!=t1 ){
            cout<<"NO";
            return 0;
        }
        s2=s.substr(f+1);
//        cout<<s2<<endl;
        t2=t.substr(m-s2.size());
        if(s2!=t2 ){
            cout<<"NO";
            return 0;
        }
        cout<<"YES";
//        for(i=0;i<f;i++){
//            if(s[i]!=t[i]){
//                cout<<"NO";
//                return 0;
//            }
//            cnt++;
//        }
//        for(i=n-1,j=m-1;i>f;i--,j--){
//            if(s[i]!=t[j]){
//                cout<<"NO";
//                return 0;
//            }
//            cnt++;
//        }
//        if(cnt +1 ==n)
//        cout<<"YES";
//        else cout<<"NO";
    }
}
