#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[109],odd=0,even=0;
    cin>>n;
    for(int i=0;i<n/2;i++)
        cin>>a[i];
    sort(a,a+n/2);
    int j=1;
    for(int i=0;i<n/2;i++)
    {
        odd+=abs(j-a[i]);
        j+=2;
    }
    j=2;
    for(int i=0;i<n/2;i++)
    {
        even+=abs(j-a[i]);
        j+=2;
    }
    cout<<min(odd,even);
}
