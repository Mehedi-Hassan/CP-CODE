#include <bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>

#define    READ      freopen("in.txt", "r", stdin)
#define    ll        long long
using namespace std;
struct X
{
	ll val, s;
};

vector <X> ara;

bool func(X a, X b)
{
	return a.val < b.val;
}

int main()
{

	ll n;
	cin>>n;


	for(int i=0;i<n;i++){
		ll a, l, x = -1;
		cin>>l;

		for(int j=0;j<l;j++){
			cin>>a;
			if(a > x){
				x = a;
			}
		}
		//cout << l << " " << x << endl;

			X temp;
			temp.val = x;
			temp.s = l;
			ara.push_back(temp);
	}
	sort(ara.begin(), ara.end(), func);

	
	long long ans = 0;

	/*for(int i = 0; i < n; i++)
	{
		cout << ara[i].s << " " << ara[i].val << endl;
	}*/

	ll c = 0;
	
	for(int i = 0; i < n-1; i++){
		c += ara[i].s;
		ans += (ara[i+1].val - ara[i].val)*c;
		//cout << ans << endl;
	}

	cout << ans << endl;
}