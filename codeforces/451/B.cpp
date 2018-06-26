#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,l=0,r=0,flag=0;
	cin>>n;
	int a[n+4];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
	    if(a[i+1]<=a[i]){
	        if(flag==1){
	            cout<<"no";
	            return 0;
	        }
	        flag=1;
	        l=i;
	        for(;i<n;i++){
	            r=i;
	            if(a[i+1]>a[i]){
	                i--;
	                break;
	            }
	        }
	    }
	}
//	cout<<l<<r;
	sort(a+l,a+r+1);
	for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cout<<"no";
            return 0;
        }
	}
	cout<<"yes\n"<<l+1<<" "<<r+1;
}