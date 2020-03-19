#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int f[5009];
int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        string st = s, rev, ans, ans2, ans3;

        rev = s;
        reverse(rev.begin(), rev.end());

        if(s == rev){
            cout<<s<<endl;
            continue;
        }

        int n = st.size(), i, j, l=-1;
        for(int i=0, j=n-1; i<=j; i++, j--){
            if(st[i] != st[j])
                break;
            l = i;
            ans += st[i];
        }

//        cout<<ans<<endl;
        st = "";
        for(int i=l+1; i<=n-ans.size()-1;i++){
            st += s[i];
            rev = st;
            reverse(rev.begin(), rev.end());
            if(st == rev)
                ans2 = st;
        }
//        cout<<ans2<<endl;

        st = "";
        for(int i=n-ans.size()-1; i>l;i--){
            st += s[i];
            rev = st;
            reverse(rev.begin(), rev.end());
            if(st == rev)
                ans3 = st;
        }

        if(ans2.size() < ans3.size()){
            ans2 = ans3;
        }
        rev = ans;
        reverse(rev.begin(), rev.end());
        cout<<ans<<ans2<<rev<<endl;
    }
}
