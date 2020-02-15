#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
//#define s       second

using namespace std;
int vis[109];
map<string, int>mp, has;
int main()
{
    int n,m;
    cin>>n>>m;

    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        has[s[i]] = 1;
    }
    string l,r;
    for(int i=0;i<n;i++){
        if(mp[s[i]] == 1)
            continue;
        reverse(s[i].begin(), s[i].end());
        string t = s[i];
        reverse(s[i].begin(), s[i].end());
        if(s[i] == t)
            continue;
        if(has[t] == 1 && mp[t] == 0){
            mp[s[i]] = mp[t] = 1;
            l = s[i] + l;
            r = r + t;
        }
//        cout<<l<<" "<<r<<endl;
    }

    string ans = l;
    for(int i=0;i<n;i++){
        reverse(s[i].begin(), s[i].end());
        string t = s[i];
        reverse(s[i].begin(), s[i].end());
        if(mp[s[i]] == 0 && s[i] ==  t){
            ans += s[i];
            break;
        }
    }
    ans += r;
    cout<<ans.size()<<endl;
    cout<<ans;
}

