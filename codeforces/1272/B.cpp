#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int u=0, d=0, r=0, l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U')
                u++;
            if(s[i]=='L')
                l++;
            if(s[i]=='R')
                r++;
            if(s[i]=='D')
                d++;
        }
        d = u = min(u, d);
        r = l = min(r, l);

        if(l==0 && r==0){
            if(u>=1 && d>=1)
                cout<<2<<endl<<"UD\n";
            else
                cout<<0<<endl<<endl;
            continue;
        }
        if(u==0 && d==0){
            if(l>=1 && r>=1)
                cout<<2<<endl<<"LR\n";
            else
                cout<<0<<endl<<endl;
            continue;
        }
        cout<<u+l+d+r<<endl;
        while(u--)
            cout<<'U';
        while(l--)
            cout<<'L';
        while(d--)
            cout<<'D';
        while(r--)
            cout<<'R';
        cout<<endl;


    }
}


