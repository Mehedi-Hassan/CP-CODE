#include<bits/stdc++.h>
using namespace std;
int a[109][109],b[109][109];
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>b[i][j];
    }
    memset(a,-1,sizeof(a));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i][j]==0){
                for(int p=0;p<m;p++) a[p][j]=0;
                for(int p=0;p<n;p++) a[i][p]=0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i][j]==1){
                int f=0;
                for(int p=0;p<m;p++){
                    if(a[p][j]==-1 || a[p][j]==1){
                        a[p][j]=1;
                        f=1;
                    }
                }
                for(int p=0;p<n;p++){
                    if(a[i][p]==-1 || a[i][p]==1){
                        a[i][p]=1;
                        f=1;
                    }
                }
                if(f==0){
                    cout<<"NO";
                    return 0;
                }

            }
        }
    }
    cout<<"YES\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
}
