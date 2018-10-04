#include<bits/stdc++.h>
using namespace std;
#define pii            pair <int,int>

pair< int , pii> ls[1000000];

int main()
{
    int n,k;
    cin>>n>>k;

    int a[n+9], b[n+9];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];

        ls[i].first = a[i]- b[i];
        ls[i].second = pii(a[i], b[i]);

    }

    sort(ls, ls+n);

    int sum = 0, i= 0;
    for(i=0; i<k || ls[i].first<0; i++){
        sum+=ls[i].second.first;
    }
    for(; i<n; i++){
        sum+=ls[i].second.second;
    }

    cout<<sum;
}
