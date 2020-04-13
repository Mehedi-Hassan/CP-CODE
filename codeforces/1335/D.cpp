#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
//#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;

string s[10];
void fun(int i, int j)
{
    char c = s[i][j];
    if(s[i][j] == '1')
        ++c;
    else
        --c;

    s[i][j] = c;
}
int main()
{
    FASTIO;
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){

        for(int i=0;i<9;i++){
            cin>>s[i];
        }
        cout<<endl;

        fun(0, 0);
        fun(1, 3);
        fun(2, 6);
        fun(3, 1);
        fun(4, 4);
        fun(5, 7);
        fun(6, 2);
        fun(7, 5);
        fun(8, 8);

        for(int i=0;i<9;i++){
            cout<<s[i]<<endl;
        }

        cout<<endl;
    }
}
