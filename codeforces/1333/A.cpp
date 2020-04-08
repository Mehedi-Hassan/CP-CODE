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
        int n, m;
        cin>>n>>m;

        int cnt = n*m, d=0;
        if(cnt%2)
            cnt/=2;
        else
            cnt = cnt/2 - 1;

        if(n*m % 2 == 0 && n != 1 && m != 1){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(d == 1 || cnt <= 0){
                        cout<<"B";
                    }
                    else{
                        cout<<"W";
                        cnt--;
                    }
                    d = abs(d - 1);

                }
                cout<<endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(d == 0 || cnt <= 0){
                        cout<<"B";
                    }
                    else{
                        cout<<"W";
                        cnt--;
                    }
                    d = abs(d - 1);

                }
                cout<<endl;
            }
        }


    }
}

