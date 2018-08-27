#include<bits/stdc++.h>
using namespace std;
int vis1[30],vis2[30];
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n+9][m+9];
    int x,y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='B'){
                x=i;
                y=j;
                while(i<=n && j<=m && a[i][j]=='B'){
                    i++;
                    j++;
                }
                --i;
                --j;
                cout<<(x+i)/2<<" "<<(y+j)/2;
                return 0;
            }
        }
    }

}

