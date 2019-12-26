#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read    freopen("input.txt", "r", stdin)
#define write   freopen("output.txt", "w", stdout)
#define mx      5e12

using namespace std;

int main()
{
    // read;
    // write;

    // string s = "azaman";
    // string t = "aza";

    // if(s<t)
    //     cout<<s;
    // else
    //     cout<<t;
    int t;
    cin>>t;

    while(t--){
        string s, c;
        cin>>s>>c;
        if(s < c){
            cout<<s<<endl;
            continue;
        }

        string st = s;
        sort(st.begin(), st.end());
        int n = s.size(), done = 0;
        for(int i=0;i<n;i++){
            if(st[i] < s[i]){
                for(int j=n-1;j>i;j--){
                    if(s[j] == st[i]){
                        swap(s[i], s[j]);
                        if(s < c)
                            cout<<s<<endl;
                        else
                            cout<<"---"<<endl;
                        done = 1;
                        break;
                    }
                }
            }
            else if(st[i] > s[i])
                break;
            if(done == 1)
                break;
        }
        if(done == 0){
            cout<<"---"<<endl;
        }

    }
}


