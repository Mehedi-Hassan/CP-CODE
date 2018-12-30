#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,b,r;
    cin>>y>>b>>r;

    for(int i=y; i>=1; i--){
        if(i+1 <= b && i+2<=r){
            cout<<3*i + 3;
            return 0;
        }
    }
}
