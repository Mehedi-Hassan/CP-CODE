#include<bits/stdc++.h>>
using  namespace std;
int main()
{
    int n,k,cnt=1;
    cin>>n>>k;
    char s[5][n+1];
    memset(s,'.',sizeof(s));
    cout<<"YES"<<endl;
    if(k%2==0){
    for(int i=0;i<k;i++)
    {
        if(i%2==0)
        s[1][cnt]='#';
        else
            s[2][cnt++]='#';
    }
    }
    else{
        s[1][n/2]='#';
    k--;
    int f=1;
    for(int i=n/2 - 1,j=n/2 + 1;k>0;i--,j++)
    {
            s[f][i]='#';
            s[f][j]='#';
            k-=2;
            if(i==1){
                f=2;
                i=n/2 - 1;
                j=n/2 + 1;
                i++;
                j--;
            }
    }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<n;j++)
            cout<<s[i][j];
        cout<<endl;
    }
}

