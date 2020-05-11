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
int n, k, a[200005], m;
map<int, int>cnt;
vector<pii>ap;

int find(int sz)
{
    vector<pii>bp;
    bp = ap;
    int used = 0;
    for(int i=0;i<m;i++){
        while(bp[i].f-sz>=0){
            used++;
            bp[i].f -= sz;

            if(used == k){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    FASTIO

    cin>>n>>k;
    vector<int>b;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(cnt[a[i]] == 0)
            b.pb(a[i]);
        cnt[a[i]]++;
    }

    for(int i=0;i<b.size();i++){
        ap.pb(pii(cnt[b[i]], b[i]));
    }
    m = ap.size();
    reverse(ap.begin(), ap.end());

    int l=1, r=n, x, ansz=0;
    while(l<=r){
        x = (l+r)/2;
        if(find(x)){
            ansz = max(x, ansz);
            l = x+1;
        }
        else{
            r = x-1;
        }
    }
    vector<int>ans;
    for(int i=0;i<m;i++){
        while(ap[i].f-ansz>=0){
            ans.pb(ap[i].s);
            ap[i].f -= ansz;
            k--;
            if(k == 0){
                i = m;
                break;
            }
        }
    }

//    cout<<ansz<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}



