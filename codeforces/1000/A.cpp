#include <bits/stdc++.h>
using namespace std;
int va[103],vb[103];
int main() {
	int n,cnt=0;
	cin>>n;
	string a[n+3],b[n+3];
	for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && va[i]!=1 && vb[j]!=1){
                va[i]=1;
                vb[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]!=b[j] && va[i]!=1 && vb[j]!=1 && a[i].size()==b[j].size()){
                va[i]=1;
                vb[j]=1;
                for(int k=0;k<a[i].size();k++){
                    if(a[i][k]!=b[j][k]) cnt++;
                }
            }
        }
    }
    cout<<cnt;
}


