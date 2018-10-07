#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int ax, ay, bx, by, cx, cy, n;
    cin>>n;

    cin>>ax>>ay>>bx>>by>>cx>>cy;
    if(bx>ax && cx>ax && by>ay && cy>ay){
        cout<<"YES";
    }
    else if(bx<ax && cx<ax && by>ay && cy>ay){
        cout<<"YES";
    }
    else if(bx<ax && cx<ax && by<ay && cy<ay){
        cout<<"YES";
    }
    else if(bx>ax && cx>ax && by<ay && cy<ay){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

