#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MX 100009
int cnt[MX],ans[MX];
int main()
{
int n,m,l,dis=0;
cin>>n>>m;
int a[n+5];
for(int i=0;i<n;i++)
{
cin>>a[i];
if(cnt[a[i]]==0) dis++;
cnt[a[i]]++;
}
for(int i=0;i<n;i++)
{
ans[i+1]=dis;
--cnt[a[i]];
if(cnt[a[i]]==0) dis--;
}
for(int i=0;i<m;i++)
{
cin>>l;
cout<<ans[l]<<endl;
}
}