#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)

using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n, d = 0;
        cin>>n;
        string s, a, b;
        cin>>s;

        for(int i=0;i<n;i++){
            if(d == 0){
                if(s[i] == '2'){
                    a += '1';
                    b += '1';
                }
                else if(s[i] == '1'){
                    d = 1;
                    a += '1';
                    b += '0';
                }
                else{
                    a += '0';
                    b += '0';
                }
            }
            else{
                if(s[i] == '2'){
                    a += '0';
                    b += '2';
                }
                else if(s[i] == '1'){
                    a += '0';
                    b += '1';
                }
                else{
                    a += '0';
                    b += '0';
                }
            }
        }

        cout<<a<<endl;
        cout<<b<<endl;
    }
}
