#include<bits/stdc++.h>
using namespace std;
int vow(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='n')
        return 1;
    else return 0;
}
int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.size();i++){
        if(vow(s[i])==0){
            if(vow(s[i+1])==0 || s[i+1]=='n')
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }

    if(i==s.size()) cout<<"YES";
}
