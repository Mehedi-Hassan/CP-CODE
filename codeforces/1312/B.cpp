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

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n, greater<int>());

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

