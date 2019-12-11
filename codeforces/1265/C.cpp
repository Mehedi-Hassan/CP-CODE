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
        int n,x;
        cin>>n;

        int a[n+9];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        x=n/2;
        while(a[x] == a[x-1]){
            x--;
            if(x<=2)
                break;
        }
        if(x<=2){
            cout<<"0 0 0\n";
            continue;
        }
        int g=0, s=0, b=0;
        while(a[0]==a[g]){
//            cout<<a[0]<<" "<<a[g]<<endl;
            g++;
        }
        s=g+1;
        while(a[g+s-1]==a[g+s])
            s++;
        b=x-s-g;
        if(g<s && g<b && g>0 && s>0 && b>0)
            cout<<g<<" "<<s<<" "<<b<<endl;
        else
            cout<<"0 0 0\n";


    }
}

