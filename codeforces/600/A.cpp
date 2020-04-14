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
const double eps = 1e-9;
const double pi = acos(-1);

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





using namespace std;
int main()
{
    FASTIO;

    string s, a, b, st;
    int d = 0;
    cin>>s;
    s += ";";

    int n=s.size();
    s += "vhghbkh";
    for(int i=0;i<n;i++){
        if(s[i]==',' || s[i]==';'){
            if(d == 0 && st.size()>0){
                if(st.size()>1 && st[0]=='0'){
                    b += st;
                    b += ",";
                    d = 0;
                }
                else{
                    a += st;
                    a += ",";
                }

            }
            else{
                b += st;
                b += ",";
                d = 0;
            }
            st = "";
            continue;
        }

        if(!('0'<=s[i] && s[i]<='9')){
            d = 1;
//            cout<<i<<" "<<s[i]<<endl;
        }
        st += s[i];
    }

    if(a.size()>0){
        a = a.substr(0, a.size()-1);
        char c = '"';
        a = c + a + c;
        cout<<a<<endl;
    }
    else
        cout<<"-\n";
    if(b.size()>0){
        b = b.substr(0, b.size()-1);
        char c = '"';
        b = c + b + c;
        cout<<b<<endl;
    }
    else
        cout<<"-";

}



