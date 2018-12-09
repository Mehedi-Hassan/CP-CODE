#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, cn=1, mx=1, a, b;

	cin >> n >> k;

	cin >> a;

	for(int i = 1; i < n; i++)
	{
		//cout << "fd";
		cin >> b;

		if(a==b)
		{
			//cout << cn << endl;
			
			cn = 1;
		}
		else cn++;

		a = b;
		mx = max(cn, mx);
	}

	cout << mx << endl;


	return 0;
}