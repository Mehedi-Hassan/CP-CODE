#include<bits/stdc++.h>
using namespace std;
#define ll                long long

int vis[110];

int main()
{
    int n;
    cin>>n;

    int a[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans = 0;
    for(int i=1; i<n-1; i++){
        if(a[i] == 0 && a[i-1]== 1 && a[i+1] == 1)
        {
            a[i+1] = 0;
            ans++;
        }
    }

    cout<<ans;

}
