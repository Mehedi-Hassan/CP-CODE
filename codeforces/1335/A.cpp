#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>

using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;

#define sf                  scanf
#define pf                  printf
#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define PF                  first
#define PS                  second
#define si(n)               scanf("%d",&n)
#define sii(x,y)            scanf("%d %d",&x,&y)
#define siii(x,y,z)         scanf("%d %d %d",&x,&y,&z)
#define sl(n)               scanf("%lld",&n)
#define sll(x,y)            scanf("%lld %lld",&x,&y)
#define slll(x,y,z)         scanf("%lld %lld %lld",&x,&y,&z)
#define FOR(i,x,y)          for(int i=x;i<y;i++)
#define RFOR(i,x,y)         for(int i=x;i>=y;i--)
#define CLR(arr,val)        memset(arr,val,sizeof arr);
#define vout(v)             for(int ind=0;ind<v.size();ind++){ cout<<v[ind]; if(ind<v.size()-1) cout<<' '; else cout<<endl;}
#define TCL(test,t)         for(test=1;test<=t;test++)
#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)
#define FASTIO()            {ios_base::sync_with_stdio(false); cin.tie(NULL);}
#define MAXN                1000006
#define MAXP                1000006
#define MOD                 1000000007
#define PI                  acos(-1)



int main()
{
//    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        ll n;
        cin>>n;

        if(n%2 == 0)
        cout<<n/2 - 1<<endl;
        else
            cout<<n/2<<endl;
    }
}


