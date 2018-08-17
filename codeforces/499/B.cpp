#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<pair< string,string > >a;

int bs(string x)
{
    int l=0, r=m-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid].first==x) return mid;
        else if(x<a[mid].first) r=mid-1;
        else l=mid+1;
    }
}
int main()
{
    cin>>n>>m;
    string s,t;
    for(int i=0;i<m;i++){
        cin>>s>>t;
        a.push_back(make_pair(s,t));
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cin>>s;
        int pos=bs(s);
        if(a[pos].first.size()<=a[pos].second.size()) cout<<a[pos].first<<" ";
        else cout<<a[pos].second<<" ";
    }
}
