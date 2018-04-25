#include<bits/stdc++.h>
using namespace std;
char a[108][108];
int n,k,val[108][108];
bool valid(int i,int j)
{
    if(a[i][j]=='#' || i<0 || i>=n || j<0 || j>=n)
        return false;
    else
        return true;
}
int main()
{

    scanf("%d %d",&n,&k);
    getchar();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            scanf("%c",&a[i][j]);
        getchar();
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(valid(i,j))
            {
                int p;
                for(p=i; p<n && p<i+k; p++)
                {
                    if(valid(p,j)==false) break;
                }
                if(p==i+k)
                {
                    for(p=i; p<n && p<i+k; p++)
                        val[p][j]++;
                }
                for(p=j; p<n && p<j+k; p++)
                {
                    if(valid(i,p)==false) break;
                }
                if(p==j+k)
                {
                    for(p=j; p<n && p<j+k; p++)
                    val[i][p]++;
                }

            }
        }

    }
    int mx=0,x=0,y=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            if(val[i][j]>mx)
            {
                mx=val[i][j];
                x=i,y=j;
            }
    }
    cout<<x+1<<" "<<y+1;
}

