#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e12

using namespace std;
map< string, int>ase;
int main()
{
	// read;
	// write;

    int n, k;
    cin>>n>>k;

    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        ase[s[i]] = i;
    }

    ll cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string st;
            for(int id=0;id<k;id++){
                if(s[i][id] == s[j][id])
                    st += s[i][id];
                else{
                    if((s[i][id]=='S' && s[j][id]=='E') || (s[i][id]=='E' && s[j][id]=='S'))
                        st += 'T';
                    else if((s[i][id]=='S' && s[j][id]=='T') || (s[i][id]=='T' && s[j][id]=='S'))
                        st += 'E';
                    else if((s[i][id]=='E' && s[j][id]=='T') || (s[i][id]=='T' && s[j][id]=='E'))
                        st += 'S';
                    else
                        break;
                }
            }
//            cout<<s[i]<<" "<<s[j]<<" "<<st<<endl;
            if(ase[st] > j){
                cnt++;
            }

        }
    }
    cout<<cnt;
}


