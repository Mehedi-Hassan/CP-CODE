#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e9

using namespace std;
ll dp[110][100009];
int main()
{
	// read;
	// write;

    int n, W, x, y;
    cin>>n>>W;

    vector< pii >v;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(pii(x,y));
    }
    sort(v.begin(), v.end());
    for(int j=v[0].f;j<=W;j++)
        dp[0][j] = v[0].s;
    for(int i=1;i<n;i++){
        for(int j=0;j<v[i].f;j++){
            dp[i][j] = dp[i-1][j];
            // printf("%4lld", dp[i][j]);
        }

        for(int j=v[i].f;j<=W;j++){
            dp[i][j] = max(dp[i-1][j-v[i].f]+v[i].s, dp[i-1][j]);
            // printf("%4lld", dp[i][j]);
        }
        // printf("\n");
    }
    cout<<dp[n-1][W];

}
    

