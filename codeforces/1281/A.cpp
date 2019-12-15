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

        int n=s.size();
        if(n >= 2){
            if(s[n-1] == 'o' && s[n-2] == 'p'){
                cout<<"FILIPINO"<<endl;
                 continue;
            }

            if(n >= 4){
                if(s[n-1] == 'u' && s[n-2] == 's' && s[n-3] == 'e' && s[n-4] == 'd'){
                    cout<<"JAPANESE"<<endl;
                     continue;
                }

                if(s[n-1] == 'u' && s[n-2] == 's' && s[n-3] == 'a' && s[n-4] == 'm'){
                    cout<<"JAPANESE"<<endl;
                     continue;
                }

            }
            if(n >= 5){
                if(s[n-1] == 'a' && s[n-2] == 'd' && s[n-3] == 'i' && s[n-4] == 'n' && s[n-5] == 'm'){
                    cout<<"KOREAN"<<endl;
                     continue;
                }

            }
        }
    }
}

