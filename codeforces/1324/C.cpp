#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.size(),cnt = 0, ans = 0;
        for(int i=0;i<n;i++){
            cnt++;
            ans = max(ans, cnt);
            if(s[i] == 'R')
            cnt = 0;
        }
        cnt++;
        ans = max(ans, cnt);
        cout<<ans<<endl;
    }
}

