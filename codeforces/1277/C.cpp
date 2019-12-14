#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int vis[150009];

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        memset(vis, 0, sizeof(vis));
        for(int i=0;i<n-4;i++){
            if(s[i] == 't' && s[i+1]=='w' && s[i+2]=='o' && s[i+3]=='n' && s[i+4]=='e'){
//                cout<<i+1<<" ";
                vis[i+2] = 1;

            }
        }
        for(int i=0;i<n-2;i++){
            if(s[i] == 'o' && s[i+1]=='n' && s[i+2]=='e' && vis[i] == 0){
//                cout<<i+1<<" ";
                vis[i+1] = 1;

            }
        }

        for(int i=2;i<n;i++){
            if(s[i] == 'o' && s[i-1]=='w' && s[i-2]=='t' && vis[i] == 0){
//                cout<<i+1<<" ";
                vis[i-1] = 1;

            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i] == 1)
                cnt++;
        }
        cout<<cnt<<endl;
        for(int i=0;i<n;i++){
            if(vis[i] == 1)
                cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

