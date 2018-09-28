#include<bits/stdc++.h>
using namespace std;

int vis[1009];

int main()
{
    int a[109],n=0;
    char ch;

    while(scanf("%d%c",&a[n++],&ch)){
        vis[a[n-1]]=1;
        if(ch=='\n') break;
    }

    sort(a,a+n);
    int l=1,r=1,f=0;
    for(int i=1;i<1005;i++){

        l=i;
        if( vis[l] == 1){
            r=l;
            while(vis[r+1]==1){
                r++;
                i++;
            }

            if(l==r){
                if(f) cout<<",";
                cout<<l;
            }

            else{
                if(f) cout<<",";
                cout<<l<<'-'<<r;
            }
            f=1;
        }

    }
}

