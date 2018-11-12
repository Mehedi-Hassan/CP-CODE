#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, f =1;
    string a;

    cin>>n>>a;
    if(n ==1){
        cout<<a;
        return 0;
    }


    for(int i=0;i<n;i++){
        if(a[i] > a[i+1] && f){
            f = 0;
            continue;
        }
        cout<<a[i];
    }
}
