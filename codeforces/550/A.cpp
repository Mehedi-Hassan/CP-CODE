#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read    freopen("input.txt", "r", stdin)
#define write   freopen("output.txt", "w", stdout)

using namespace std;
int ab[100009], ba[100009];
int main()
{

    // read;
    // write;

    string s;
    cin>>s;

    int n = s.size();
    
    for(int i=0;i<n-1;i++){
        if(s[i]=='A' && s[i+1] == 'B')
            ab[i] = 1;
    }
    for(int i=0;i<n-1;i++){
        if(s[i]=='B' && s[i+1] == 'A')
            ba[i] = 1;
    }

    for(int i=0;i<n;i++){
        if(ab[i]){
            for(int j=i+2;j<n;j++){
                if(ba[j]){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        if(ba[i]){
            for(int j=i+2;j<n;j++){
                if(ab[j]){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }

    cout<<"NO";

}

