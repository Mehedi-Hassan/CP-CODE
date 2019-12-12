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

    int a[n], val[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=1, left[n], right[n];
    left[0] = 1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            cnt++;
        }
        else
            cnt = 1;
        left[i] = cnt;
    }
    right[n-1] = 1;
    cnt = 1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1])
            cnt++;
        else
            cnt=1;
        right[i] = cnt;
    }
    int ans = 1;

//    for(int i=0; i<n;i++)
//        cout<<left[i]<<" ";
//    cout<<endl;
//    for(int i=0; i<n;i++)
//        cout<<right[i]<<" ";
//    cout<<endl;
    for(int i=0; i<n;i++){
        if(i==0){
            ans = max(ans, right[i+1]);
            continue;
        }
        else if(i==n-1){
            ans = max(ans, left[i-1]);
            continue;
        }
        else if(a[i-1]<a[i+1]){
            ans = max(ans, left[i-1]+right[i+1]);
        }
        ans = max(ans, left[i]);
//        cout<<ans<<endl;
    }
    ans = max(ans, left[n-1]);
    cout<<ans;
}

