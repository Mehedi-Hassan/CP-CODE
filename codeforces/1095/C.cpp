#include<bits/stdc++.h>
using namespace std;
#define ll                long long

priority_queue< ll > v;


int main()
{
    ll n, k;
    cin>>n>>k;

    while(n){
        ll x = log2(n);
        x = pow(2, x);
        n -= x;

        v.push(x);
    }

    if(k < v.size()){
        cout<<"NO";
        return 0;
    }

    while(v.size() != k){

        int x = v.top()/2;
        if(x == 0){
            cout<<"NO";
            return 0;
        }

        v.pop();
        v.push(x);
        v.push(x);
    }

    cout<<"YES"<<endl;

    while(!v.empty()){
        cout<<v.top()<<" ";
        v.pop();
    }
}
