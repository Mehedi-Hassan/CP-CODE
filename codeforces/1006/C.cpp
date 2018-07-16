#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n+6],l[n+6],r[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0) l[i]=a[i];
        else l[i]=l[i-1]+a[i];
    }
    r[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        r[i]=r[i+1]+a[i];
    }
    long long mx=0;
    for(int i=0,j=n-1;i<j && i<n && j>=0;){
        if(l[i]==r[j] && l[i]>mx){
            mx=l[i];
        }
        if(l[i]>r[j]) j--;
        else i++;
//        else {
//            j--;
//            i++;
//        }
    }
    cout<<mx;
}

