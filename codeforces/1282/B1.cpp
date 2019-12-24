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

    int t;
    cin>>t;

    while(t--){
        ll n, p, k, pt;
        cin>>n>>p>>k;

        pt = p;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int ans = 0;
        for(int i=0;i<n;){
            if(a[i]<=p){
                p -= a[i];
                ans = i+1;
            }
            if(i+2 < n){
                if(a[i+2] <= p){
                    i += 2;
                    continue;
                }
            }
            if(i+1 < n){
                if(a[i+1] <= p){
                    i += 1;
                    continue;
                }
            }
            break;
        }

        p = pt;
        for(int i=1;i<n;){
            if(a[i]<=p){
                p -= a[i];
                ans = max(ans, i+1);
            }
            if(i+2 < n){
                if(a[i+2] <= p){
                    i += 2;
                    continue;
                }
            }
            if(i+1 < n){
                if(a[i+1] <= p){
                    i += 1;
                    continue;
                }
            }
            break;
        }

        cout<<ans<<endl;
    }
}
    

