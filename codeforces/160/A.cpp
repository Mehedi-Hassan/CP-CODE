#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+9],cum[n+9];
    cum[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        cum[i]=cum[i-1]+a[i];
    }
    int sum;
    for(int i=n-1;i>=0;i--){
        sum=cum[n]-cum[i];
//        cout<<sum<CC<" "<<cum[i]<<endl;
        if(sum>cum[i]){
            cout<<n-i;
            break;
        }
    }
}
