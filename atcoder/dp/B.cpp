#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e9

using namespace std;

int main()
{
	// read;
	// write;

    int n, k;
    cin>>n>>k;

    int h[n], ans[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
        ans[i] = mx;
    }
    ans[0] = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<min(n,i+k+1); j++){
            ans[j] = min(ans[j], ans[i]+abs(h[j]-h[i]));
        }
    }

    
    cout<<ans[n-1];


}
    

