#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn1,mn2,mn3;
    string s;
    cin>>n;
    vector< int > a,b,c,ab,bc,ac,abc;
    for(int i=0;i<n;i++){
        cin>>x>>s;
        if(s=="A") a.push_back(x);
        else if(s=="B") b.push_back(x);
        else if(s=="C") c.push_back(x);
        else if(s=="AB" || s=="BA") ab.push_back(x);
        else if(s=="BC" || s=="CB") bc.push_back(x);
        else if(s=="CA" || s=="AC") ac.push_back(x);
        else if(s=="ABC" || s=="BAC"  || s=="BCA"  || s=="CBA"  || s=="ACB"  || s=="CAB") abc.push_back(x);
    }
    if(a.size()) sort(a.begin(),a.end());
    if(b.size()) sort(b.begin(),b.end());
    if(c.size()) sort(c.begin(),c.end());
    if(ab.size()) sort(ab.begin(),ab.end());
    if(bc.size()) sort(bc.begin(),bc.end());
    if(ac.size()) sort(ac.begin(),ac.end());
    if(abc.size()) sort(abc.begin(),abc.end());

    mn1=0;
    int f1=0,f2=0,f3=0;
    if(a.size()) mn1+=a[0],f1++;
    if(b.size()) mn1+=b[0],f1++;
    if(c.size()) mn1+=c[0],f1++;

    mn2=999999;
    if(ab.size() && c.size()) mn2=min(ab[0]+c[0],mn2),f2=1;
    if(bc.size() && a.size()) mn2=min(bc[0]+a[0],mn2),f2=1;
    if(ac.size() && b.size()) mn2=min(ac[0]+b[0],mn2),f2=1;

    if(ab.size() && bc.size()) mn2=min(ab[0]+bc[0],mn2),f2=1;
    if(ab.size() && ac.size()) mn2=min(ab[0]+ac[0],mn2),f2=1;
    if(bc.size() && ac.size()) mn2=min(bc[0]+ac[0],mn2),f2=1;

    int mn=9999999;
    if(f1==3) mn=min(mn,mn1);
    if(f2==1) mn=min(mn,mn2);
    if(abc.size()) mn=min(mn,abc[0]), f3=1;

    if(f1==3 || f2==1 || f3==1) cout<<mn;
    else cout<<-1;
}
