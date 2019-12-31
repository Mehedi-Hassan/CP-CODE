#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define psc     pair<string, char>
#define f       first
#define s       second
#define read    freopen("input.txt", "r", stdin)
#define write   freopen("output.txt", "w", stdout)

using namespace std;

std::vector< psc > v;
int n, q, ans =0;

void fun(string s, int id){
    for(int i=0;i<q;i++){
        if(s == v[i].f){
            s = "";
            s += v[i].s;
            break;
        }
    }

    if(id == n-1){
        if(s == "a")
            ans++;
        return;
    }

    for(int i=0;i<q;i++){
        if(v[i].f[0]==s[0]){
            fun(v[i].f, id+1);
        }
    }
}
int main()
{

    // read;
    // write;

    cin>>n>>q;
    string s;
    char c;

    for(int i=0;i<q;i++){
        cin>>s>>c;
        v.push_back(psc(s, c));
    }

    for(int i=0;i<q;i++){
        fun(v[i].f, 1);
    }

    cout<<ans;
}

