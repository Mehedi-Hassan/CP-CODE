#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)

using namespace std;
int visb[100009], visg[100009];
int main()
{
    int t;
//    cin>>t;
    sf(t);

    while(t--){
        int n, k, x, done = -1;
//        cin>>n;
        sf(n);
//        vector<int>a[n+9];

        memset(visb, -1, sizeof(visb));
        memset(visg, -1, sizeof(visg));

        for(int i=0;i<n;i++){
//            cin>>k;
            sf(k);
            done = -1;
            for(int j=0;j<k;j++){
//                cin>>x;
                sf(x);
//                a[i].push_back(x);
                if(visb[x] == -1 && done == -1){
                    visb[x] = 1;
                    visg[i] = x;
                    done = 1;
                }
            }
        }



//        for(int i=0;i<n;i++){
//            k = a[i].size();
//            done = 0;
//            for(int j=0;j<k;j++){
//                if(visb[a[i][j]] == -1){
//                    visb[a[i][j]] = 1;
//                    visg[i] = a[i][j];
//                    done = 1;
//                    break;
//                }
//            }
//            if(done == 0){
//                for(int p=1;p<=n;p++){
//                    if(vis)
//                }
//            }
//        }

        int boy = 0;
        for(int i=1;i<=n;i++){
            if(visb[i] == -1){
                boy = i;
                break;
            }
        }
        done = 0;
        for(int i=0;i<n;i++){
            if(visg[i] == -1){
                visg[i] = 1;
                printf("IMPROVE\n");
//                cout<<"IMPROVE"<<endl;
                pf(i+1);
//                printf(" ");
                pf(boy);
//                cout<<i+1<<" "<<boy<<endl;
                printf("\n");
                done = 1;
                break;
            }
        }
        if(done == 0){
            printf("OPTIMAL\n");
//            cout<<"OPTIMAL"<<endl;
        }
    }
}

