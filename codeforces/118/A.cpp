#include<bits/stdc++.h>
using namespace std;
int vow(char c){
    if(c=='a' || c=='o' || c=='y' || c=='e' || c=='u' || c=='i') return 1;
    else return 0;
}
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        if(vow(s[i])==0) cout<<"."<<s[i];
    }
}
