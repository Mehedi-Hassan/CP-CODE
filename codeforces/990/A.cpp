#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll n,m,a,b;
	cin>>n>>m>>a>>b;
	b= b*(n%m);
	a*=(((n/m)+1)*m-n);
	cout<<min(a,b);
	return 0;
}
