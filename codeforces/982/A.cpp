#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,i=0,ans=1;
    string a;
    cin>>n;
    cin>>a;
    if(n==1){
        if(a[0]=='0'){
            cout<<"No";
                return 0;
        }
        else{
            cout<<"Yes";
                return 0;
        }
    }
    if(n==2){
        if(a[0]==a[1]){
            cout<<"No";
                return 0;
        }
        else{
            cout<<"Yes";
                return 0;
        }
    }
    if(n==3){
        if(a[0]==a[1] || a[1]==a[2]){
            cout<<"No";
                return 0;
        }
        else{
            cout<<"Yes";
                return 0;
        }
    }
    if(a[i]=='0')
    {
        if(a[i+1]=='0')
        {
            cout<<"No";
            return 0;
        }
        else
            i++;
    }
    for(; i<n-1; i++)
    {
        if(i==n-1-1){
            if(a[i+1]=='1'){
                    ans=0;
                    break;
            }
            else
                break;
        }
        if(i==n-1-2){

            if(a[i+1]=='0' && a[i+2]=='1')
            {
                break;
            }
            else{
                ans=0;
                break;
            }
        }
        if(a[i+1]=='0' && a[i+2]=='1')
        {
            i++;
        }
        else if(a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='1'){
            i+=2;
        }
        else{
            ans=0;
            break;
        }
    }
    if(ans) cout<<"Yes";
    else cout<<"No";
}

