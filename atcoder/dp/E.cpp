#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e12

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
    for(int i=0;i<=n;i++){
        for(int j=0;j<100009;j++){
            dp[i][j] = mx;
        }
    }

    dp[0][0] = 0;
    dp[0][v[0].s] = v[0].f;
    for(int i=1;i<n;i++){
        for(int j=0;j<100009;j++){
            if(j-v[i].s >= 0)
                dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i].s]+v[i].f);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    ll ans = 0;
    for(int i=0;i<100009;i++){
        if(dp[n-1][i] <= W)
            ans = i;
    }
    cout<<ans;
}
    

