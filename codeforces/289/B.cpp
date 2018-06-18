#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m,d;
	cin>>n>>m>>d;
	int a[n+5][m+5];
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin>>a[i][j];
	        if((a[i][j]-a[0][0])%d){
	            cout<<-1;
	            return 0;
	        }
	    }
	}
	int ans=0,mn=100000000;
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        ans=0;
	    	for(int k=0;k<n;k++){
	           for(int l=0;l<m;l++){
	               ans+=abs(a[i][j]-a[k][l])/d;
	            }
	        }
	        mn=min(ans,mn);
	    }
	}
	cout<<mn;
	return 0;
}
