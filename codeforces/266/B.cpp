#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    while(k--){
        for(int i=0;i<n-1;i++){
            if(a[i]=='B' && a[i+1]=='G'){
                swap(a[i],a[i+1]);
                i++;
            }
        }
    }
    cout<<a;
}
