#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll a,b,n;
	cin>>a>>b>>n;
	while(n-->0){
        ll pre=a;
        for(int i=0;i<10;i++){
            ll temp=a;
            temp*=10;
            temp+=i;
            if(temp%b==0){
                a=temp;
                break;
            }
        }
        if(pre==a){
            cout<<-1;
            return 0;
        }
        else{
            cout<<a;
            while(n-->0) cout<<0;
        }
	}
}


