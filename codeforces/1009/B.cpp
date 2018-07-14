#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100009];
    scanf("%s",a);
    int l=strlen(a),i=0,cnt1=0,fl=1;
    for(i=0; i<l; i++){
        if(a[i]=='1') cnt1++;
    }
    for(i=0; i<l; i++){
        if(a[i]=='2'){
            fl=0;
            for(int j=0;j<i;j++){
                if(a[j]=='0') cout<<0;
            }
            for(int j=0;j<cnt1;j++){
                cout<<1;
            }
            break;
        }
    }
    for(;i<l;i++){
        if(a[i]!='1') cout<<a[i];
    }
    if(fl){
        sort(a,a+l);
    for(int i=0;i<l;i++) cout<<a[i];
    }
}

