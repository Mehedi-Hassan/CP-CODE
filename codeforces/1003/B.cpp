
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,flag,ar[207];
    cin>>a>>b>>x;
    if(a>=b)
        flag=0;
    else flag=1;
    for(int i=0;i<=x;i++){
        ar[i]=flag;
        if(flag) b--;
        else a--;
        flag=1-flag;
    }
        if(ar[0]==0){
            for(int i=0;i<a;i++) cout<<0;
            for(int i=0;i<x;i++) cout<<ar[i];
            if(ar[x]==ar[0]){
            for(int i=0;i<b;i++) cout<<1;
            cout<<0;
            }
            else{
                cout<<ar[x];
                for(int i=0;i<b;i++) cout<<1;

            }
        }
        else{
            for(int i=0;i<b;i++) cout<<1;
            for(int i=0;i<x;i++) cout<<ar[i];
            if(ar[x]==ar[0]){
            for(int i=0;i<a;i++) cout<<0;
            cout<<1;
            }
            else{
                cout<<ar[x];
                for(int i=0;i<a;i++) cout<<0;
            }
        }

}

