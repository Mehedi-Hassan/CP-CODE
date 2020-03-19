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
        int n;
        cin>>n;

        if(n == 1){
            cout<<-1<<endl;
        }
        else{
            n--;
            while(n--){
                cout<<3;
            }
            cout<<4<<endl;
        }
    }
}

