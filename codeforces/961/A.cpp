#include<bits/stdc++.h>
using namespace std;
int a[1009];
int main()
{
    int n,m,x;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        a[x-1]++;
    }
    sort(a,a+n);
    cout<<a[0];

}
