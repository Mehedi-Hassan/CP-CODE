#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    ll x;
    char a[m+5][25];
    memset(a,'0',sizeof(a));
    for(int i=0;i<m+1;i++)
    {
        cin>>x;
        for(int j=0;;j++){
            if(x%2) a[i][j]='1';
            else a[i][j]='0';
//            cout<<a[i][j];
            x/=2;
            if(x==0){
//                a[i][j+1]='\0';
                break;
            }

        }
//        cout<<strlen(a[i])<<endl;
    }
    int ans=0;
    for(int i=0;i<m;i++){
        int cnt=0;
        for(int j=0;j<22;j++){
            if(a[i][j]!=a[m][j]) cnt++;
        }
        if(cnt<=k) ans++;
    }
    cout<<ans;
}
