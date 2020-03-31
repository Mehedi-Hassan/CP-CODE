#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll.
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)

using namespace std;
int a,b,c,d, x1,y11, x2, y2;
bool val(int x, int y)
{
    if(x1<=x && x<=x2 && y11<=y && y<=y2)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int x, y;
        cin>>a>>b>>c>>d;

        cin>>x>>y>> x1 >> y11>> x2 >> y2;

        if((a && val(x-1, y)) || (b && val(x+1, y))){
            x-=a;
            x+=b;
            a = 0;
            b = 0;
        }
        if((c && val(x, y-1)) || (d && val(x, y+1))){
            y-=c;
            y+=d;
            c = 0;
            d = 0;
        }


        if(val(x,y) && !(a||b||c||d)){
            cout<<"Yes\n";
        }
        else
            cout<<"No\n";
    }
}

