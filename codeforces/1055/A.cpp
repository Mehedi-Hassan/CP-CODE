#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin>>n>>s;
    s--;

    int a[n+9], b[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    if((a[s]== 0 && b[s]==0) || a[0]==0){
        cout<<"NO";
        return 0;
    }

    if(a[s] == 1){
        cout<<"YES";
        return 0;
    }

    for(int i=s; i<n;i++){
        if(a[i] == 1 && b[i]== 1){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;



}
