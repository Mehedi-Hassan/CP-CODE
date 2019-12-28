#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read    freopen("input.txt", "r", stdin)
#define write   freopen("output.txt", "w", stdout)

using namespace std;

ll pos[100009], vis[100009];
int main()
{

    

    int t;
    cin>>t;

    while(t--){
        ll n, k;
        cin>>n>>k;

        ll mid = k/2, ans = n/k;
        if(n%k > mid){
        	cout<<ans*k + mid<<endl;
        }
        else{
        	cout<<n<<endl;
        }


    }
}

