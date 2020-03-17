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
        int n, x, d = 0;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2 != a[0]%2){
                d = 1;
            }
        }
        if(d == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
