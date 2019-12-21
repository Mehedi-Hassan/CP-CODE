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

        int n=s.size(), ans = 0, id = -1, d;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                id = i;
                ans++;
                break;
            }
        }
//        cout<<ans<<endl;
        for(int i=0;i<n;i++){
            d = s[i] - '0';
            if(d%2 == 0 && i != id){
//                cout<<"hvvvsd    "<<i<<endl;
                ans++;
                break;
            }
        }
//        cout<<ans<<endl;
        int cnt =0;
        for(int i=0;i<n;i++){
            cnt += s[i]-'0';
        }
        if((cnt%3 == 0 && ans==2) || (s=="0")){
            cout<<"red\n";
        }
        else{
            cout<<"cyan\n";
        }
    }
}

