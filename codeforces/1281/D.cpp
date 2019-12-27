#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read    freopen("input.txt", "r", stdin)
#define write   freopen("output.txt", "w", stdout)
// #define mx      1e9 + 7
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // read;
    // write;
 
 
    int t;
    cin>>t;
    // scanf("%d", &t);
 
    while(t--){
        int r, c;
        cin>>r>>c;
        // scanf("%d %d", &r, &c);
        string s[r];
        for(int i=0;i<r;i++){
            cin>>s[i];
        }
        string rs, cs;
        for(int i=0;i<r;i++)
            cs += 'A';
        for(int i=0;i<c;i++)
            rs += 'A';
        int da = 0, dp = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(s[i][j] == 'A')
                    da = 1;
                else
                    dp = 1;
                if(da==1 && dp==1)
                    break;
            }
        }
        if(dp == 0){
            cout<<0<<endl;
            continue;
        }
        if(da == 0){
            cout<<"MORTAL"<<endl;
            continue;
        }

        if(s[0] == rs || s[r-1] == rs){
            cout<<1<<endl;
            continue;
        }
        string st;
        for(int i=0;i<r;i++){
            st += s[i][0];
        }
        if(st == cs){
            cout<<1<<endl;
            continue;
        }

        st = "";
        for(int i=0;i<r;i++){
            st += s[i][c-1];
        }
        if(st == cs){
            cout<<1<<endl;
            continue;
        }



        if(s[0][0]=='A' || s[0][c-1]=='A' || s[r-1][0]=='A' || s[r-1][c-1]=='A'){
            cout<<2<<endl;
            continue;
        }

        int done = 0;
        for(int i=0;i<r;i++){
            if(s[i] == rs){
                cout<<2<<endl;
                done = 1;
                break;
            }
        }
        if(done == 1){
            continue;
        }
        for(int i=0;i<c;i++){
            st = "";
            for(int j=0;j<r;j++){
                st += s[j][i];
            }
            if(st == cs){
                cout<<2<<endl;
                done = 1;
                break;
            }
        }
        if(done == 1){
            continue;
        }




        for(int i=0;i<c;i++){
            if(s[0][i] == 'A' || s[r-1][i] == 'A'){
                cout<<3<<endl;
                done = 1;
                break;
            }
        }
        if(done == 1){
            continue;
        }

        for(int i=0;i<r;i++){
            if(s[i][0] == 'A' || s[i][c-1] == 'A'){
                cout<<3<<endl;
                done = 1;
                break;
            }
        }
        if(done == 1){
            continue;
        }

        cout<<4<<endl;

    }
}