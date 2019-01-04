#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, a[8];
    cin>>s;

    for(int i=0;i<5;i++){
        cin>>a[i];

    }
    for(int i=0;i<5;i++){
        if(s[0]== a[i][0] || s[1]==a[i][1]){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

}
