#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    cout<<0<<" ";
    int n = s.size();
    for(int i=1; i<n-1; i++){
        if(s[0] == s[i+1]){
            reverse(s.begin(), s.begin()+i+1);

            cout<<1<<" ";
        }

        else
            cout<<0<<" ";

//        cout<<s<<endl;
    }

    if(n>1){
        if(s[n-1] == 'a'){
            reverse(s.begin(), s.end());
            cout<<1;
        }
        else
            cout<<0;
    }


//    cout<<s;

}
