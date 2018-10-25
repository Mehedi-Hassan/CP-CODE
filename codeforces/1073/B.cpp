#include<bits/stdc++.h>
using namespace std;

#define ll       long long
int vis[1000000];
stack<int >s;

int main()
{
    int n;

    cin>>n;
    int a[n+9], b[n+9];

    for(int i=0;i<n;i++){
        cin>>a[i];
        vis[a[i]] = 1;
    }

    for(int i=n-1;i>=0 ;i--){
        s.push(a[i]);
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){

        int cnt = 0;
        if(vis[ b[i]]){
            while(s.top() != b[i] && !s.empty()){
                vis[ s.top()] = 0;

                s.pop();
                cnt++;


            }
            if(s.top() == b[i]){
                cnt++;
                 vis[ s.top()] = 0;
                s.pop();
            }

        }

        cout<<cnt<<" ";
    }
}
