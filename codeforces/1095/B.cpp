#include<bits/stdc++.h>
using namespace std;
#define ll                long long

int main()
{
    int n;
    cin>>n;

    int a[n+9];
    int mx = 0, mn= 10e6, mxi = 0, mni = 0;


    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i] > mx){
            mx=  a[i];
            mxi = i;
        }

        if(a[i] < mn){
            mn=  a[i];
            mni = i;
        }
    }

    a[mxi] = 0;

    int mx2 = 0;
    for(int i=0;i<n;i++){

        if(a[i] > mx2){
            mx2=  a[i];
        }

    }

    a[mxi] = mx;
    a[mni] = 10e6;

    int mn2 = 10e6;
    for(int i=0;i<n;i++){

        if(a[i] < mn2){
            mn2=  a[i];
        }

    }

    cout<<min(mx - mn2, mx2 - mn);
}
