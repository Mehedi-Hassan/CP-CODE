#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]==a[1] && a[0]<a[2]){
            if(a[1] == a[2]-1){
                a[2]--;
                cout<<abs(a[1]-a[0])+abs(a[2]-a[0])+abs(a[2]-a[1])<<endl;
                continue;
            }
            a[0]++;
            a[1]++;
            a[2]--;
        }
        else if(a[1]==a[2] && a[0]<a[1]){
            if(a[0] == a[1]-1){
                a[0]++;
                cout<<abs(a[1]-a[0])+abs(a[2]-a[0])+abs(a[2]-a[1])<<endl;
                continue;
            }
            a[0]++;
            a[1]--;
            a[2]--;
        }
        else if(a[0]<a[2] && a[1]<a[2]){
            a[0]++;
            a[2]--;
        }
        cout<<abs(a[1]-a[0])+abs(a[2]-a[0])+abs(a[2]-a[1])<<endl;

    }
}

