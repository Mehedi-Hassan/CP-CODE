#include<bits/stdc++.h>
using namespace std;

long long cnt[7];

int main()
{
    long long sum=0,n,x[7];
    cin>>n;
    int a[n+9];

    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    for(int i=0;i<5;i++){
        cin>>x[i];
    }

    for(int i=0;i<n;i++){
        sum+=a[i];
        for(int i=4;i>=0;i--){

            if(sum/x[i]){
                cnt[i]+=sum/x[i];
                sum%=x[i];
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<cnt[i]<<" ";
    }
    cout<<endl<<sum;
}
