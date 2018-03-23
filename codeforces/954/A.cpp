#include<bits/stdc++.h>
using namespace std;
#define MX 10000
#define INF 10007
int main()
{
    int n,ans;
    cin>>n;
    ans=n;
    char a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        if(a[i]=='R' && a[i+1]=='U') 
{i++; ans--;}
        else if(a[i]=='U' && a[i+1]=='R')
{i++; ans--;}
    }
    cout<<ans;

}