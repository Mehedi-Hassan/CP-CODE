#include <iostream>
using namespace std;
#define mx 1000000007
int main() {
	// your code goes here
	int a[4];
	cin>>a[1]>>a[2];
	a[0]=a[1]-a[2];
	long n;
	cin>>n;
	long long ans=a[n%3];
	if((n/3)%2) ans*=-1;
	if(ans<0){
	    ans+=mx*(abs(ans%mx)+1);
	}
	cout<<ans%mx;
	return 0;
}