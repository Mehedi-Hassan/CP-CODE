#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)

using namespace std;
string sum(string s)
{
	int n = s.size(), carry = 1;
	reverse(s.begin(), s.end());

	for(int i=0;i<n;i++){
		int x = s[i]-'0';
		s[i] = '0' + (x+carry)%10;
		carry = (x+carry)/10;
	}
	// if(carry){
	// 	s += '0'+carry;
	// }
	reverse(s.begin(), s.end());
	return s;
}

string fun(string st, int n, int k)
{
	string ans;
    while(ans.size()+k <= n){
    	ans += st;
    }
    ans += st.substr(0, n-ans.size());
    return ans;
}
int main()
{
	// read;
	// write;

    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    // k = min(k, n-k);
    string st = s.substr(0, k);
    string ans;

    for(int i=0; i<n;i++){
    	ans += '9';
    }
    st = fun(st, n, k);
    if(st<ans && st>=s)
    	ans = st;

    st = sum(s.substr(0, k));
    st = fun(st, n, k);
    if(st<ans && st>=s)
    	ans = st;
    // ans = min(ans, sum(st));

    // st = s.substr(k, k);
    // if(st+st < ans && st+st>=s)
    // 	ans = st+st;
    // // ans = min(ans, st+st);
    // st = sum(st);
    // if(st+st < ans && st+st>=s)
    // 	ans = st+st;
    // ans = min(ans, sum(st));

    cout<<ans.size()<<endl;
    cout<<ans;
}

