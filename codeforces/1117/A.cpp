#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;

    int a[n+9];
    int mx = 0, ans = 0, cnt = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];

        mx = max(a[i], mx);
    }

    for(int i=0;i<n;i++){

        ans++;

        if(a[i] != mx){
            cnt = max(ans-1, cnt);
            ans = 0;
        }
        cnt = max(ans, cnt);


    }

    cout<<cnt;
}
