#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k, sz;

    cin>>s;
    cin>>k;

    sz = s.size();
    int n = 0;
    for(int i=0;i<sz;i++){
        if(s[i] == '*' || s[i] == '?')
            continue;

        n++;
    }

    if(n>k){
        for(int i=0;i<sz-1;i++){
            if(s[i+1] == '*' || s[i+1] == '?'){
                n--;
                sz--;
                s.erase(s.begin()+i);
            }

            if(n == k)
                break;

        }

    }
    else if(n<k){
        for(int i=0; i<sz;i++){
            if(s[i] == '*'){
                string x;
                char c = s[i-1];

                x+=c;

                while(n != k){
                    s.insert(i,x );
                    n++;
                    sz++;
//                    cout<<s<<endl;
                }

                break;
            }
        }

    }

    if(n == k){
        for(int i=0;i<sz;i++){
            if(s[i] == '*' || s[i] == '?')
                continue;

            cout<<s[i];
        }
    }
    else cout<<"Impossible";
}
