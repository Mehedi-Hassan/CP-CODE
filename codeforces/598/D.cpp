#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;

int dx[5] = {   1,  0,  -1,   0};
int dy[5] = {   0,  1,   0,  -1};

int n, m, k, vis[1009][1009], vis2[1009][1009], ans, cnt[1009][1009];
string st[1009];
vector<pii>v;

bool val(int x, int y)
{
    return (0<=x && x<n && 0<=y && y<m);
}
void fun(int x,int y)
{
    v.push_back(pii(x, y));
    vis[x][y] = 1;

    for(int i=0;i<4;i++){
        if(val(x+dx[i], y+dy[i])){
            if(st[x+dx[i]][y+dy[i]] == '*'){
//                vis2[x+dx[i]][y+dy[i]] = 1;
                ans++;
            }
        }
    }

    for(int i=0;i<4;i++){
        if(val(x+dx[i], y+dy[i])){
            if(st[x+dx[i]][y+dy[i]] == '.' && vis[x+dx[i]][y+dy[i]]==0){
                fun(x+dx[i], y+dy[i]);
            }
        }
    }

}
int main()
{
    FASTIO;

    cin>>n>>m>>k;

    for(int i=0;i<n;i++){
        cin>>st[i];
    }
    int x, y;
    for(int i=0;i<k;i++){
        cin>>x>>y;
        x--;
        y--;
        ans = 0;
//        memset(vis2, 0, sizeof(vis2));
        if(vis[x][y] == 1)
            cout<<cnt[x][y]<<endl;
        else{
            fun(x,y);
            int sz = v.size();
            for(int i=0;i<sz;i++){
                cnt[v[i].f][v[i].s] = ans;
            }
    //        cout<<sz<<endl;
            cout<<cnt[x][y]<<endl;
            v.clear();
        }

    }
}


//5 6 5
//******
//*..*.*
//******
//*....*
//******
//2 2
//2 5
//4 3
//4 4
//4 2
