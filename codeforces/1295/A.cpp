#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%2){
            cout<<7;
            n -= 3;
        }
        while(n){
            cout<<1;
            n-=2;
        }
        cout<<endl;
    }
}

