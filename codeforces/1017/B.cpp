#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    long long cnt10=0,cnt00=0,z=0,o=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1') o++;
        else z++;
        if(a[i]=='1' && b[i]=='0') cnt10++;
        if(a[i]=='0' && b[i]=='0') cnt00++;
    }
    if(z==n || o==n) cout<<0;
    else cout<<((z*cnt10) + (o*cnt00) - (cnt10 * cnt00));
}
