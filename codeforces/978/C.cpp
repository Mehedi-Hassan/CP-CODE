#include<bits/stdc++.h>
#define MX 200005
using namespace std;
long long n,m,a[MX],b[MX];
//typedef long long ll;
int main()
{

     cin>>n>>m;
     a[0]=0;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
         a[i]+=a[i-1];
     }

    for(int i=0;i<m;i++)
         cin>>b[i];
    for(int i=1,j=0;j<m;)
    {
        if(b[j]<=a[i])
            cout<<i<<" "<<b[j++]-a[i-1]<<endl;
        else
            i++;
    }
    return 0;
}

