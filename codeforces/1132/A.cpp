#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if(a == d && (a >0 && d>0))
    cout<< 1;
    else if (a == 0 && d == 0){
        if(c == 0)
        cout<<1;
        else
        cout<<0;
    }
    else 
    cout<<0;
    
} 