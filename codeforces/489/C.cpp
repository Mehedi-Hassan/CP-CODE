#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s;
    int a[m+9],b[m+9];
    memset(a,0,sizeof(a));
    a[0]=1;
    memset(b,0,sizeof(b));
    int sum=s-1;
    for(int i=m-1;i>=0;i--){
        if(sum>=9){
            a[i]=9;
            sum-=9;
        }
        else{
            a[i]=a[i]+sum;
            break;
        }
    }
    sum=s;
    for(int i=0;i<m;i++){
        if(sum>=9){
            b[i]=9;
            sum-=9;
        }
        else{
            b[i]=sum;
            break;
        }
    }
    int sum1=0,sum2=0;
    if(m==1) a[0]=s,b[0]=s;
    if((s==0 && m>1) || s>9*m) {
        cout<<-1<<" "<<-1;
        return 0;
    }
    for(int i=0;i<m;i++) cout<<a[i];
    printf(" ");
    for(int i=0;i<m;i++) cout<<b[i];
}
