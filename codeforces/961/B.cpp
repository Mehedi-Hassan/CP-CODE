#include<bits/stdc++.h>
using namespace std;
int main()
{
//    cout<<log2(50002000);
    int n, k;
    cin>>n>>k;

    int a[n], s1[n], s2[n], st[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>st[i];
    }

    s1[0] = a[0];
    s2[0] = a[0]*st[0];
    for(int i=1;i<n;i++){
        s1[i] = s1[i-1] + a[i];
        s2[i] = s2[i-1] + a[i]*st[i];
    }

//    for(int i=0;i<n;i++){
//        cout<<s1[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++){
//        cout<<s2[i]<<" ";
//    }
//    cout<<endl;
    int ans = 0;
    for(int i=0; i<=n-k; i++){
        if(i == 0){
            if(n == k)
                ans = max(ans, s1[n-1]);
            else
                ans = max(ans, s2[n-1] - (s2[i+k-1]) + s1[i+k-1]);
//            cout<<i<<" "<<s2[n-1] - (s2[i+k-1]) + s1[i+k-1]<<" "<<ans<<endl;
        }
        else{
            ans = max(ans, s2[n-1] - (s2[i+k-1] - s2[i-1]) + s1[i+k-1] - s1[i-1]);
//            cout<<i<<" "<<s2[n-1] - (s2[i+k-1] - s2[i-1]) + s1[i+k-1] - s1[i-1]<<" "<<ans<<endl;
        }
    }
    cout<<ans;
}

//10 5
//10 10 10 10 10 10 10 10 10 10
//0  0  0  0  0  0  0  0  0  1
