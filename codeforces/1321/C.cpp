#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
//    string st = "yz";
//    char ch = 'z';
//
//    if(st[0] == --ch && st[1] == ++ch){
//        cout<<st<<endl;
//    }
    int n, ans = 0;
    cin>>n;
    string s;
    cin>>s;

    for(char c='z'; c> 'a'; c--){
        char pre = c;
        pre--;

        while(1){
            int d = 0;
            for(int i=0;i<s.size();i++){
                if(i>0){
                    if(s[i] == c && s[i-1] == pre){
                        s.erase(s.begin()+i);
                        d = 1;
                        ans++;
                    }
                }
                if(i<s.size()-1){
                    if(s[i] == c && s[i+1] == pre){
                        s.erase(s.begin()+i);
                        d = 1;
                        ans++;
                    }
                }
            }
            if(d == 0)
                break;
        }
    }

    cout<<ans;

}

