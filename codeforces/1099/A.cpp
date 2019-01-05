#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w, u1, h1,u2,h2;
    cin>>w>>h;

    cin>>u1>>h1;
    cin>>u2>>h2;


    for(int i=h; i>0;i--){
        if(i == h1)
        w-= u1;

        else if(i == h2)
            w-= u2;

        w += i;

        if(w<0)
            w = 0;

    }

    cout<<w;
}
