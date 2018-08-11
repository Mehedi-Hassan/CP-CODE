#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt[1009];
int main()
{
    int n;
    cin>>n;
    int a[n+8];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=n;j++){
        memset(cnt,0,sizeof(cnt));
    for(int i=j;i<=n;i++){
        cnt[i]++;
//        cnt[a[i]]++;
        if(cnt[i]>=2){
            cout<<i<< " ";
            break;
        }
//        if(cnt[a[i]]>=2){
//            cout<<a[i]<< " ";
//            break;
//        }
        i=a[i]-1;
    }
    }
}


