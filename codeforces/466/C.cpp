#include<bits/stdc++.h>
using namespace std;

int cnt[1000009];

int main()
{


    int n;
    cin>>n;

    long long a[n+9], s[n+9], r[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(i) s[i] = a[i] + s[i-1];
        else s[i] = a[i];
    }

    if(s[n-1] % 3){
        cout<<0;
        return 0;
    }
    long long sum = s[n-1]/3;


    r[n-1] = a[n-1];

    int c = 0;
    if(r[n-1] == sum){
        c++;
    }
    cnt[n-1] = c;

    for(int i=n-2; i>=0; i--){
        r[i] = r[i+1] + a[i];

        if(r[i] == sum){
            c++;
        }

        cnt[i] = c;
    }

//    for(int i=0;i<n;i++){
//        cout<<cnt[i]<<" ";
//    }
//    cout<<endl;
    long long ans = 0;
    for(int i=0;i<n-2;i++){
        if(s[i] == sum){
            ans += cnt[i+2];
        }
    }

    cout<<ans;
}


