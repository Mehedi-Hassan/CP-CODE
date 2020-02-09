#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e12

using namespace std;
ll dp[3010][3010];
int main()
{
    string s, t, ans;
    cin>>s;
    cin>>t;

    int n = s.size(), m = t.size();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1] == t[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

//    cout<<dp[n][m];

    for(int i=n, j=m; i>0 && j>0;){
        if(dp[i][j]!=dp[i-1][j] && dp[i][j]!=dp[i][j-1]){
            ans = s[i-1] + ans;
            i--;
            j--;
        }
        else if(dp[i][j] == dp[i][j-1]){
            j--;
        }
        else
            i--;
    }

    cout<<ans;
}


