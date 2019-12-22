#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e9

using namespace std;

int main()
{
	// read;
	// write;

    int n;
    cin>>n;

    int a[n], b[n], c[n], dpa[n], dpb[n], dpc[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    dpa[0] = a[0];
    dpb[0] = b[0];
    dpc[0] = c[0];
    for(int i=1;i<n;i++){
        dpa[i] = a[i] + max(dpb[i-1], dpc[i-1]);
        dpb[i] = b[i] + max(dpa[i-1], dpc[i-1]);
        dpc[i] = c[i] + max(dpb[i-1], dpa[i-1]);
    }
    cout<<max(dpa[n-1], max(dpb[n-1], dpc[n-1]));
}
    

