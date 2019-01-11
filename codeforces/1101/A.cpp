#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q, l , r , d;
    cin>>q;

    while(q--){
        cin>>l>>r>>d;

        if(d < l){

            cout<<d<<endl;
        }
        else{
            int ans = r%d;
            r = r/d;
            r++;

            cout<<r*d<<endl;

        }
    }
}
