#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cnt[10000], vis[10009];


int main()
{
    int n, k;
    cin>>n>>k;

    int a[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;

        if(cnt[a[i]] > k){
            cout<<"NO";
            return 0;
        }
    }

    int col = 1;
    for(int i=0;i<n;i++){
        if(vis[i] == 0){
            for(int j=i; j<n;j++){
                if(a[j] == a[i]){
                    vis[j] = col;
                    col++;
                    if(col == k+1)
                        col = 1;
                }

            }
        }
    }

    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<vis[i]<<" ";
    }
}
