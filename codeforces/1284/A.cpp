#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e12

using namespace std;

int main()
{
	// read;
	// write;

	int n, m;
	cin>>n>>m;

	string s[n], t[m];
	for(int i=0;i<n;i++){
        cin>>s[i];
	}
	for(int i=0;i<m;i++){
        cin>>t[i];
	}

    int q;
    cin>>q;

    while(q--){
        ll y;
        cin>>y;

        int ni = y%n -1;
        if(ni == -1)
            ni = n-1;

        int mi = y%m -1;
        if(mi == -1)
            mi = m-1;
        cout<<s[ni]<<t[mi]<<endl;
    }
}


