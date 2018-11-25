#include<bits/stdc++.h>
using namespace std;
#define ll                long long

int a[109], b[109];
int main()
{
    int n, r;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>r;

        for(int i=0;i<r;i++){
            cin>>a[i];

            b[a[i]]++;
        }

    }

    for(int i=1;i<= 100;i++){
        if(b[i] == n)
            cout<<i<<" ";
    }
}
