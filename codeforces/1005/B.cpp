#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int a=s.size(),b=t.size(),i,j;
    for( i=a-1,j=b-1;(i>=0 && j>=0);i--,j--){
        if(s[i]!=t[j]) break;
    }
    i++,j++;
//    cout<<a<<" "<<b<<" "<<i<<" "<<j<<endl;
    cout<<i+j;
}

