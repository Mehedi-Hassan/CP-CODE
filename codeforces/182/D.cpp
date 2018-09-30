#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int main()
{
    string a,b;
    cin>>a>>b;
    int l1=a.size(), l2=b.size();

    int n=min(l1,l2);
    for(int i=1;i<= n;i++){
        if(l1%i==0 && l2%i==0){
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());

    int cnt=0;

    n=v.size();
    if(l2<l1){
        swap(a,b);
        swap(l1,l2);
    }

    for(int i=0;i<n;i++){
        int f=1;

        string s=a.substr(0,v[i]);
        for(int j=0;j<l1 && l1%v[i]==0;j+=v[i]){
            if(a.substr(j,v[i]) != s){
                f=0;
            }
        }

        for(int j=0;j<l2 && l2%v[i]==0;j+=v[i]){
            if(b.substr(j,v[i]) != s){
                f=0;
            }
        }

        if(f){
            cnt++;

        }
    }

    cout<<cnt;

}
