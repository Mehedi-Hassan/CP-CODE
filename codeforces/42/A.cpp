#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double v;
    cin>>n>>v;
    int a[n+9],b[n+9];
    double d[n+9],sum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];

    }

    for(int i=0;i<n;i++){
        d[i]= (double) b[i]/a[i];
    }

    sort(d,d+n);

    printf("%lf", min(v, sum*d[0]) );
}
