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
        int n, d=0;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+2;j<n;j++){
                if(a[i] == a[j]){
                    d= 1;
                    break;
                }
            }
            if(d == 1)
                break;
        }
        if(d == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

