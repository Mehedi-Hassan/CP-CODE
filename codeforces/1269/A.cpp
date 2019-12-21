#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n%2 == 0){
        cout<<4+n<<" "<<4;
    }
    else{
        cout<<9+n<<" "<<9;
    }
}

