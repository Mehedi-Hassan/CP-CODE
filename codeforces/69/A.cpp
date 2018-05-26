#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,s1=0,s2=0,s3=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        s1+=a;
        s2+=b;
        s3+=c;
    
}
    if(s1 || s2 || s3)
    cout<<"NO";
    else
    cout<<"YES";
}