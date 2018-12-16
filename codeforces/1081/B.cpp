#include<bits/stdc++.h>
using namespace std;
#define   ll     long long

int a[100009], ans[100009], vis[100009];
stack<int> v[100009], b[100009];

int main()
{
    int n;
    cin>>n;

    int cnt = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[a[i]].push(i);

        if(vis[a[i]] == 0)
            vis[a[i]] = n - a[i] - 1;
        else
            vis[a[i]]--;

    }

    for(int i=0; i<n; i++){
        if(vis[i] != 0)
        {
            printf("Impossible");
            return 0;
        }
    }

    cnt =0;
    for(int i=0;i<n;i++){
        cnt++;
        for(int j=0;j<n-a[i]; j++){

            if(v[a[i]].empty())
                break;

            int id = v[a[i]].top();

            ans[id] = cnt;

            v[a[i]].pop();

//            cout<<a[i]<<endl;
        }
    }

    printf("Possible\n");
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
