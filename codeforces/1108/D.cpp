#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt = 0;

    if(n == 1){
        cout<<cnt<<endl;
        cout<<s;
        return 0;
    }

    for(int i=0; i<n;i++){

        if(i+2 == n)
        break;

        if(s[i] == s[i+1] == s[i+2]){
            if(s[i] == 'R') s[i+1] = 'B';
            else if(s[i] == 'B') s[i+1] = 'G';
            else if(s[i] == 'G') s[i+1] = 'R';
            cnt++;
        }
    }

//    cout<<cnt<<endl;
    map< char, int> mp;

    for(int i=0; i<n;i++){

        mp.clear();
        if(s[i] == s[i+1]){
            mp[s[i]] = 1;
            mp[s[i+2]] = 1;

            if(mp['R'] == 0) s[i+1] = 'R';
            if(mp['B'] == 0) s[i+1] = 'B';
            if(mp['G'] == 0) s[i+1] = 'G';

            cnt++;

        }
    }

    cout<<cnt<<endl;
    cout<<s;
}
