#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int a, b ,c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;
    int ans = 0;
    for(int i=0;;i++){
        int xa = a;
        int xb = b;
        int xc = c;
        int xd = d;

        xa -= i;
        xd -= i;

        if(xa<0 || xb<0 || xc<0 || xd<0)
            break;

        int mn = min(xd, min(xb, xc));

        ans = max(ans, e*i + f*mn);
    }

    for(int i=0;;i++){
        int xa = a;
        int xb = b;
        int xc = c;
        int xd = d;

        xb -= i;
        xc -= i;
        xd -= i;

        if(xa<0 || xb<0 || xc<0 || xd<0)
            break;

        int mn = min(xa, xd);
        if(mn < 0)
            break;
        ans = max(ans, e*mn + f*i);
    }
    cout<<ans;
}
