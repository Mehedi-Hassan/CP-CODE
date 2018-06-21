#include <iostream>

using namespace std;

int main() {
	int n,k,cnt=0;
	cin>>n>>k;
	int a[n+8];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;a[i]<=k && i<n;i++){
	    cnt++;
	    a[i]=k+1;
	}
	for(int i=n-1;a[i]<=k && i>=0;i--){
	    cnt++;
	    a[i]=k+1;
	}
	cout<<cnt;
}
