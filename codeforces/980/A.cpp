#include<bits/stdc++.h>>
using  namespace std;
int main()
{
    string s;
    int p=0,l=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='o') p++;
        else if(s[i]=='-')l++;
    }
    if(l==0 || p==0) cout<<"YES"<<endl;
    else if(p>l) cout<<"NO"<<endl;
    else
    {
        int ans=l/p;
        if(ans*p==l)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
