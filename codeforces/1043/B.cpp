#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n+9], x[n+9];
    a[0] = 0;
    for(int i=1; i<=n;i++){
        cin>>a[i];

        if(i){
            x[i-1] = a[i] - a[i-1];
        }
    }

    vector<int > v;
    for(int k=1; k<=n; k++){
            int f = 1;
        for(int i=0; i<n; i++){
            if(x[i%k] + a[i] != a[i+1]){
                f = 0;
                break;
            }
        }

        if(f){
            v.push_back(k);
        }
    }

    cout<<v.size()<<endl;
    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }


}
