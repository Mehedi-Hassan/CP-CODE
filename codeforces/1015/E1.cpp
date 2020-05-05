#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

#define ll              long long
#define pii             pair<int, int>
#define f               first
#define s               second
#define sf(a)           scanf("%d", &a)
#define sfl(a)          scanf("%lld", &a)
#define pf(a)           printf("%d ", a)
#define pfl(a)          printf("%lld\n", a)
#define Case(a)         printf("Case %d: ", a)
#define FASTIO          ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define pb              push_back
#define mp              make_pair
#define mem(arr)        memset(arr, 0, sizeof(arr))
#define mem1(arr)       memset(arr, -1, sizeof(arr))

const double eps = 1e-9;
const double pi = acos(-1);

int dx[5] = {+1, +0, -1, -0};
int dy[5] = {+0, +1, -0, -1};

bool Equal(double x, double y)
{
    return fabs(x-y)<eps; ///x==y
}

bool Greater(double x, double y)
{
    return x-eps>y; ///x>y
}

bool Lesser(double x, double y)
{
    return x+eps<y; ///x>y
}

struct point
{
    double x, y, ang;
};

int vis[109][109];

int main()
{
    FASTIO

    int n,m;
    cin>>n>>m;

    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    vector<pair<pii, int > >ans;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(s[i][j] == '.')
                continue;
            int sz = 1;
            while(1)
            {
                int d = 0;
                for(int id=0;id<4;id++){
                    if(0<=i+sz*dx[id] && i+sz*dx[id]<n && 0<=j+sz*dy[id] && j+sz*dy[id]<m){
                        if(s[i+sz*dx[id]][j+sz*dy[id]] != '*'){
                            d = 1;
                            break;
                        }
                    }
                    else{
                        d = 1;
                        break;
                    }
                }
                if(d == 1){
                    sz--;
                    break;
                }
                else{
                    for(int id=0;id<4;id++){
                        if(0<=i+sz*dx[id] && i+sz*dx[id]<n && 0<=j+sz*dy[id] && j+sz*dy[id]<m){
                            vis[i+sz*dx[id]][j+sz*dy[id]] = 1;
                        }
                    }
                    sz++;
                }
            }
            if(sz>0){
                vis[i][j] = 2;
                ans.pb(mp(pii(i+1,j+1), sz));
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
//            cout<<vis[i][j];
            if(s[i][j]=='*' && vis[i][j]==0){
                cout<<-1;
                return 0;
            }
        }
//        cout<<endl;
    }

    cout<<ans.size()<<endl;
    n = ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i].f.f<<" "<<ans[i].f.s<<" "<<ans[i].s<<endl;
    }
}



