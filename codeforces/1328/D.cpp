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
        int n, cnt = 1, d = 1, flag = -1;
        cin>>n;

        int a[n], col[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        col[0] = 1;
        for(int i=1;i<n;i++){
            if(a[i] != a[i-1]){
                cnt = 2;
                if(d == 1)
                    d = 2;
                else
                    d = 1;

                col[i] = d;
            }
            else{
                flag = i;
                col[i] = d;
            }
        }

        if(a[0] != a[n-1] && col[0] == col[n-1]){
            if(col[n-1] == 1)
                col[n-1] = 2;
            else
                col[n-1] = 1;
            if(a[n-2] != a[n-1] && col[n-2] == col[n-1]){
                if(col[n-1] == 1)
                    col[n-1] = 2;
                else
                    col[n-1] = 1;

                if(flag != -1){
//                    cout<<flag<<endl;
//                    for(int i=0;i<n;i++){
//                        cout<<col[i]<<" ";
//                    }
//                    cout<<endl;
                    for(int i=flag;i<n;i++){
                        if(col[i] == 1)
                            col[i] = 2;
                        else
                            col[i] = 1;
                    }
//                    for(int i=0;i<n;i++){
//                        cout<<col[i]<<" ";
//                    }
//                    cout<<endl;
                    if(a[0] != a[n-1] && col[0] == col[n-1]){
                        col[n-1] = 3;
                        cnt = 3;
                    }
                }
                else{
                    col[n-1] = 3;
                    cnt = 3;
                }
            }
        }
        cout<<cnt<<endl;
        for(int i=0;i<n;i++){
            cout<<col[i]<<" ";
        }
        cout<<endl;
    }
}

