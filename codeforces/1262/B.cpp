#include<bits/stdc++.h>
#define pii     pair<int, int>

using namespace std;
int vis[200000], b[200000];
int main()
{
//    while(1){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        memset(vis, 0, sizeof(vis));
        memset(b, 0, sizeof(b));
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(vis[a[i]] == 0){
                b[i] = a[i];
                vis[a[i]] = 1;
            }
        }
        int cnt = 1;
        for(int i=0;i<n;i++){
            if(b[i] == 0){
                while(vis[cnt] == 1){
                    if(cnt > n)
                        break;
                    cnt++;
                }

                b[i] = cnt;
                vis[b[i]] = 1;
            }
            if(cnt > n)
                break;
        }
        if(cnt > n){
            cout<<-1<<endl;
            continue;
        }
        int d = 0;
        for(int i=0;i<n;i++){
            if(b[i] > a[i]){
                cout<<-1<<endl;
                d = 1;
                break;
            }
        }
        if(d == 1)
            continue;

        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;

    }
}
//}
