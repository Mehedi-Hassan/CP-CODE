#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define db      double
#define pi      acos(-1.0)

using namespace std;
int main()
{
    int T;
    cin>>T;

    while(T--){
        string s;
        cin>>s;

        int n = s.size(), l=-1, r= -1;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                l = i;
                break;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(s[i] == '1'){
                r = i;
                break;
            }
        }

        if(l==-1 && r==-1){
            cout<<0<<endl;
            continue;
        }
        else{
            int cnt = 0;
            for(int i=l;i<=r;i++){
                if(s[i] == '0'){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
}
