#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e12
 
using namespace std;
 
vector< ll >v[100009], nval;
ll val[100009];
 
bool cmp(vector<ll> a, vector<ll> b)
{
    return a[0] < b[0];
}
 
ll lb(ll n, ll x)
{
    ll l = 0;
    ll h = n;
 
    while (l < h) {
        ll mid = (l + h) / 2;
        if (x < nval[mid]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}
int main()
{
	// read;
	// write;
 
	ll n;
	cin>>n;
 
	ll l[n];
	for(int i=0;i<n;i++){
        ll x;
        cin>>l[i];
 
        for(int j=0;j<l[i];j++){
            cin>>x;
            v[i].push_back(x);
        }
	}
	sort(v,v+n, cmp);
	ll valid = 0;
	vector<ll> last;
	for(int i=0;i<n;i++){
        l[i] = v[i].size();
        int done = 0;
        for(int j=1;j<l[i];j++){
            if(v[i][j] > v[i][j-1]){
                val[i] = 1;
                valid++;
                done = 1;
                break;
            }
        }
        if(done == 0){
            nval.push_back(v[i][0]);
            last.push_back(v[i][l[i]-1]);
        }
	}
	ll nvalid = n - valid;
	ll ans = valid*n;
	ans += nvalid*valid;
 
	for(int i=0;i<nval.size();i++){
        ans += nvalid - lb(nvalid,last[i]);
	}
	cout<<ans;
}