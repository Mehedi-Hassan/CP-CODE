#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MX 1000009
int a[MX];
void sieve()
{
				a[1]=1;
    for(int i=4;i<=MX; i+=2)
    a[i]=1;
				int root=sqrt(MX);
				for(int i=3;i<=root;i+=2)
				{
         if(a[i]==0){
								for(int j=i*i; j<=MX; j+=2*i)
												a[j]=1;
				}
    }
}
int main()
{
    ll n,t;
				sieve();
				cin>>t;
				while(t--)
    {
         cin>>n;
								ll root=sqrt(n);
				    if(n!=1 && root*root==n && a[root]==0)
								    cout<<"YES"<<endl;
								else
								    cout<<"NO"<<endl;
    }
}