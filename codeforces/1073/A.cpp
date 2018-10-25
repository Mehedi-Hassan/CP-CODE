#include<bits/stdc++.h>
using namespace std;

#define ll       long long

int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;

//    if(n == 1){
//        cout<<"YES\n"<<s;
//        return 0 ;
//    }

    for(int i=0;i<n-1; i++){
        if(s[i] != s[i+1]){
                cout<<"YES\n";
            cout<<s[i]<<s[i+1];
            return 0;
        }
    }

    cout<<"NO";
}
