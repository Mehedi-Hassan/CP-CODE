#include<bits/stdc++.h>
using namespace std;
int cnta[30],cntb[30];
int main()
{
    string s,t;
    cin>>s>>t;
    int a=s.size(), b=t.size();
    for(int i=0;i<a;i++) cnta[s[i]-'a']++;
    for(int i=0;i<b;i++) cntb[t[i]-'a']++;
    for(int i=0;i<30;i++){
        if(cntb[i]>cnta[i]){
            cout<<"need tree\n";
            return 0;
        }
    }
    if(a==b){
        cout<<"array\n";
        return 0;
    }
    else{
        int i=0,j=0;
        for(i=0,j=0;i<a && j<b;){
            if(s[i]==t[j]){
                j++;
            }
            i++;
        }
        if(j==b) cout<<"automaton\n";
        else cout<<"both\n";
    }
}
