#include <bits/stdc++.h>
using namespace std;
int n,a[102][5],cnt=0;
int main() {
	cin>>n;
	for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j][0]==a[i][1] && a[j][2]==0 && i!=j){
                cnt++;
                a[j][2]=1;
            }
        }
	}
	cout<<n-cnt;
}

