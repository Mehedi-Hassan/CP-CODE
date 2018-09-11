#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4],mx=0;
    for(int i=0;i<3;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        mx+=a[i][0]+a[i][1]+a[i][2];
    }
    mx/=2;
    for(int i=0;i<3;i++){
        a[i][i]=mx-(a[i][0]+a[i][1]+a[i][2]);
    }
    for(int i=0;i<3;i++){
        cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
    }
}
