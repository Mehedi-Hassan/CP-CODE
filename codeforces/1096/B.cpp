#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long md = 998244353;
    int n;
    string s;

    cin>>n;
    cin>>s;

    int has = 0;
    for(int i=0; i<n;i++){
        if(s[i] != s[0]){
            has = 1;
            break;
        }
    }

    if(has){
        int a=0, b=0;

        for(int i=0; i<n;i++){
                if(s[i] != s[0]){
                    break;
                }
                a++;
            }

            for(int i=n-1; i>= 0;i--){
                if(s[i] != s[n-1]){
                    break;
                }
                b++;
            }
        if(s[0] != s[n-1]){
            cout<<a+b+1;
        }

        else{
            a++, b++;
            cout<<(a%md * b%md) %md;

        }
    }
    else{
        long long ans = 1;
        for(int i=2; i<=n;i++){
            ans = (ans%md * i%md)%md;
        }

        cout<<ans;
    }
}
