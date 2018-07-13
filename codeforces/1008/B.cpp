#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5],w,h;
    cin>>w>>h;
    a[0]=max(w,h);
    for(int i=1;i<n;i++){
        cin>>w>>h;
        if(w>a[i-1] && h>a[i-1]){
            cout<<"NO";
            return 0;
        }
        if(max(w,h)>a[i-1])
            a[i]=min(w,h);
        else
            a[i]=max(w,h);
    }
    cout<<"YES";
}

