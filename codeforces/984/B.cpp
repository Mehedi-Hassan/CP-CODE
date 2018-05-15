#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[108][108];
int n,m;
int x[9]={1,1,0,-1,-1,-1,0,1,'\0'};
int y[9]={0,1,1,1,0,-1,-1,-1,'\0'};
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return 0;
    else return 1;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            int sum=0,val=0;
            if(a[i][j]=='*') continue;
            else if('1'<=a[i][j] && a[i][j]<='8')
                val=a[i][j]-'0';
            for(int k=0;k<8;k++)
            {
                if(valid(i+x[k],j+y[k])){
                        if(a[i+x[k]][j+y[k]]=='*')
                            sum++;
                }
            }
            if(sum!=val)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}