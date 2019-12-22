#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)

using namespace std;

int main()
{
	// read;
	// write;

    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll w=0, b=0;
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            w += a[i]-a[i]/2;
            b += a[i]/2;
        }
        else{
            b += a[i]-a[i]/2;
            w += a[i]/2;
        }
    }
    cout<<min(w,b);
}

