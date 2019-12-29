#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read    freopen("input.txt", "r", stdin)
#define write   freopen("output.txt", "w", stdout)

using namespace std;

int main()
{

    // read;
    // write;

    int t;
    cin>>t;

    while(t--){
    	int n, k1, k2;
    	cin>>n>>k1>>k2;

    	int d = 0, x;
    	for(int i=0;i<k1;i++){
    		cin>>x;
    		if(x == n){
    			d = 1;
    		}
    	}

    	for(int i=0;i<k2;i++){
    		cin>>x;
    	}

    	if(d){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    }
}

