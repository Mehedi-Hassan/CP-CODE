#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int h=0, w = 0, ans = 0;

    for(int i=0;; i++){
        if(i%2)
            h++;
        else
            w++;

        if(n<= h*w && n>ans){
            cout<<h+w;
            break;
        }

        ans = h*w;


    }
}
