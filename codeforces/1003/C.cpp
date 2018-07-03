#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+5],cum[n+5];
    cum[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cum[i]=cum[i-1]+a[i];
    }
    double mx=0.0;
    for(int i=1;i<=n-k+1;i++){
        for(int j=0;j<=n-k && i+j+k-1<=n;j++){
            double avg=(double)(cum[i+j+k-1]-cum[i-1]) / (j+k);
            mx=max(mx,avg);
        }
    }
    printf("%.15lf",mx);
}

