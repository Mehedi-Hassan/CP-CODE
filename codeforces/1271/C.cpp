#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int n, sx, sy, ansx, ansy;
    cin>>n>>sx>>sy;

    int x[n], y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int ans = 0, cnt =0;
    for(int i=0;i<n;i++){
        if(x[i] > sx)
            cnt++;
    }
    if(cnt > ans){
        ans = cnt;
        ansx = sx+1;
        ansy = sy;
    }

    cnt =0;
    for(int i=0;i<n;i++){
        if(x[i] < sx)
            cnt++;
    }
    if(cnt > ans){
        ans = cnt;
        ansx = sx-1;
        ansy = sy;
    }

    cnt =0;
    for(int i=0;i<n;i++){
        if(y[i] > sy)
            cnt++;
    }
    if(cnt > ans){
        ans = cnt;
        ansx = sx;
        ansy = sy+1;
    }

    cnt =0;
    for(int i=0;i<n;i++){
        if(y[i] < sy)
            cnt++;
    }
    if(cnt > ans){
        ans = cnt;
        ansx = sx;
        ansy = sy-1;
    }
    cout<<ans<<endl;
    cout<<ansx<<" "<<ansy;
}
