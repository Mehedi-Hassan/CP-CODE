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
vector<int>cnt[35];
int ans[1009];
int main()
{
    vector<int>prime;
    prime.push_back(2);
    prime.push_back(3);
    prime.push_back(5);
    prime.push_back(7);
    prime.push_back(11);
    prime.push_back(13);
    prime.push_back(17);
    prime.push_back(19);
    prime.push_back(23);
    prime.push_back(29);
    prime.push_back(31);



//    cout<<prime[0]<<" "<<prime[1];
    int t;
    cin>>t;

    for(int tc = 1;tc<=t; tc++){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            for(int j=0;j<11;j++){
                if(a[i]%prime[j] == 0){
                    cnt[prime[j]].push_back(a[i]);
                }
            }
        }
        memset(ans, -1, sizeof(ans));
        int bal = 0, donee = 0;
        for(int i=0;i<11;i++){
            donee = 0;
            for(int j=0;j<cnt[prime[i]].size();j++){
                if(ans[cnt[prime[i]][j]] == -1){
                    donee = 1;
                    ans[cnt[prime[i]][j]] = i+1-bal;
                }
            }
            if(donee == 0){
                bal++;
            }
        }
        int anscnt = 0, done[14];
        memset(done, 0, sizeof(done));
        for(int i=0;i<n;i++){
            if(done[ans[a[i]]] == 0){
                done[ans[a[i]]] = 1;
                anscnt++;
            }
        }
        cout<<anscnt<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[a[i]]<<" ";
        }
        cout<<endl;
        for(int i=0;i<35;i++){
            cnt[i].clear();
        }
    }
}

