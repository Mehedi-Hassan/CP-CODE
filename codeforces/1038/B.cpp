#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
//    int odd=n/2 + n%2, even=n/2;
    if(n==1 || n==2){
        cout<<"No\n";
        return 0;
    }
    else{
        cout<<"Yes\n";
        cout<<n-1;
        for(int i=1;i<n;i++) cout<<" "<<i;
        cout<<"\n"<<1<<" "<<n;
    }
}
