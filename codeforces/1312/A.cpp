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
        int n, m;
        cin>>n>>m;

        if(n%m == 0){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

