#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read    freopen("input.txt", "r", stdin)
#define write   freopen("output.txt", "w", stdout)

using namespace std;

int main()
{

    // read;
    // write;

    int t;
    cin>>t;

    while(t--){
    	ll n;
        cin>>n;

    	ll a[n+9];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int d = 0;
        for(int i=0;i<n-1;i++){
            if(abs(a[i] - a[i+1]) > 1){
                // cout<<a[i]<<" "<< a[i+1]<<endl;
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                d =1;
                break;
            }
        }
        if(d == 0){
            cout<<"NO"<<endl;
        }

    }
}

