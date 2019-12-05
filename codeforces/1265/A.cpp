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
        string s;
        cin>>s;
        int n=s.size();
        if(n==1 && s[0]=='?'){
            cout<<'a'<<endl;
            continue;
        }
        if(s[0] == '?'){
            if(s[1]=='a'||s[1]=='b'||s[1]=='?')
                s[0] = 'c';
            if(s[1]=='a'||s[1]=='c')
                s[0] = 'b';
            if(s[1]=='c'||s[1]=='b')
                s[0] = 'a';
        }
        for(int i=1;i<n-1;i++){
            if(s[i] == '?'){
                if((s[i-1]=='a'||s[i-1]=='b'||s[i-1]=='?') && (s[i+1]=='a'||s[i+1]=='b'||s[i+1]=='?'))
                    s[i] = 'c';
                if((s[i-1]=='a'||s[i-1]=='c'||s[i-1]=='?') && (s[i+1]=='a'||s[i+1]=='c'||s[i+1]=='?'))
                    s[i] = 'b';
                if((s[i-1]=='c'||s[i-1]=='b'||s[i-1]=='?') && (s[i+1]=='c'||s[i+1]=='b'||s[i+1]=='?'))
                    s[i] = 'a';
            }
        }
        if(s[n-1] == '?'){
            if(s[n-2]=='a'||s[n-2]=='b')
                s[n-1] = 'c';
            if(s[n-2]=='a'||s[n-2]=='c')
                s[n-1] = 'b';
            if(s[n-2]=='c'||s[n-2]=='b')
                s[n-1] = 'a';
        }
        int d = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                cout<<-1<<endl;
                d = 1;
                break;
            }
        }
        if(d == 0){
            cout<<s<<endl;
        }
    }
}
