#include<bits/stdc++.h>
using namespace std;

map< int , int > m[500009], cnt;


int main()
{
    int n;
    cin>>n;

    int a[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j)
                continue;

            int sum = a[i] + a[j];

            if(m[sum][i] == 0 && m[sum][j] == 0){
                m[sum][i] = m[sum][j] = 1;
                cnt[sum]++;
            }

        }
    }

    int ans = 0;
    for(int i = 0; i< 200009; i++){
        ans = max(ans, cnt[i]);
    }

    cout<<ans;
}
