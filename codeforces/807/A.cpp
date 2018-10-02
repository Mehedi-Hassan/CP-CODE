#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int pre[n], aft[n];

    for(int i=0;i<n;i++){
        cin>>pre[i] >> aft[i];
    }

    int done = 0;
    for(int i=0;i<n ;i++){
        if(pre[i] != aft[i]){
            cout<<"rated";
            return 0;
        }
    }

    for(int i=0;i<n-1;i++){
        if(pre[i] >= aft[i+1]){
            done = 1;
        }
        else{
            cout<<"unrated";
            return 0;
        }
    }

    cout<<"maybe";
}
