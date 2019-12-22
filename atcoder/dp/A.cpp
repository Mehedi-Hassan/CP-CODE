#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)

using namespace std;

int main()
{
	// read;
	// write;

    int n;
    cin>>n;

    int h[n], ans[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    ans[0] = 0;
    ans[1] = abs(h[0]-h[1]);

    for(int i=2;i<n;i++){
        ans[i] = min( abs(h[i]-h[i-1])+ans[i-1], abs(h[i]- h[i-2])+ans[i-2] );
    }
    cout<<ans[n-1];


}
    

