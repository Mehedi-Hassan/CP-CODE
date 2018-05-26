#include<bits/stdc++.h>
using namespace std;
#define MX 100009
int main()
{
    long long n,a[MX],b[MX];
    cin>>n;
				a[0]=b[0]=0;
    for(int i=1;i<=n;i++)
    {
         cin>>a[i];
								b[i]=a[i];
								if(i-1) a[i]+=a[i-1];
    }
				sort(b,b+n+1);
				for(int i=1;i<=n;i++)
								if(i-1) b[i]+=b[i-1];
				int m,type,l,r;
				cin>>m;
				while(m--)
    {
								cin>>type>>l>>r;
								if(type==1)
								cout<<a[r]-a[l-1]<<endl;
								else
         cout<<b[r]-b[l-1]<<endl;
    }
}