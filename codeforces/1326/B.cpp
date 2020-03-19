#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int n;
    cin>>n;

    ll a[n+9], b[n+9], x[n+9];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    x[0] = 0;
    x[1] = b[0];
    a[0] = b[0];
    a[1] = x[1] + b[1];
    ll mx = a[0];


    for(int i=2;i<=n;i++){
        x[i] = max(x[i-1], a[i-1]);
        a[i] = b[i] + x[i];
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }
}
