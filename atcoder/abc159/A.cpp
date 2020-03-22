#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    n = n*(n-1)/2;
    m = m*(m-1)/2;

    cout<<n+m;
}

