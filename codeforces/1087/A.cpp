#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin>>s;

    int n = s.size();

    if(n%2 == 0){
        for(int i=0, j=n-1; i <= j; ){

            t = s[j--] + t;
            if(j+1 <= i)
                break;
            t = s[i++]+t;
        }
    }
    else{
        for(int i=0, j=n-1; i <= j; ){



            t = s[i++]+t;
            if(j <= i-1)
                break;
            t = s[j--] + t;
        }
    }

    cout<<t;
}
