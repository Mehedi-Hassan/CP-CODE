#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define read	freopen("input.txt", "r", stdin)
#define write	freopen("output.txt", "w", stdout)
#define mx      5e12

using namespace std;

int main()
{
	// read;
	// write;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt = 0, ans = 0, id = n;
        for(int i=0;i<n;i++){
            if(s[i] == 'A'){
                id = i;
                break;
            }
        }
        for(int i=id;i<n;i++){
            cnt++;
            if(s[i] == 'A')
                cnt = 0;

            ans = max(ans, cnt);
        }
        cout<<ans<<endl;
    }
}


