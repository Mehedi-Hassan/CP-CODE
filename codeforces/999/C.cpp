#include <bits/stdc++.h>

using namespace std;
int vis[27];
int main() {
    int n,k;
    vector <int> let[27];
    cin>>n>>k;
    char s[n+2];
    for(int i=0;i<n;i++){
        cin>>s[i];
        let[s[i]-'a'].push_back(i);
    }
    int i=0;
    while(k){
        for(int i=0;i<26;i++){
            if(k<=0) break;
            for(int j=0;j<let[i].size();j++){
                if(k<=0) break;
                s[let[i][j]]='0';
                k--;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]!='0')
        cout<<s[i];
    }
}
