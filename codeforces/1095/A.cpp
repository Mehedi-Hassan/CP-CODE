#include<bits/stdc++.h>
using namespace std;
#define ll                long long

int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;

    int cnt = 1;
    for(int i=0; i<n;){
        cout<<s[i];
        i += ++cnt;
    }

}
