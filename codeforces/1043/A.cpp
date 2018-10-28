#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s=0;
    cin>>n;

    int a[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }

    int k=0;
    while(1){
        int t=0;
        for(int i=0;i<n;i++){
            if(k-a[i] >0)
                t+= k-a[i];
        }

        if(t>s){
            int f =1;
            for(int i=0; i<n;i++){
                if(k < a[i])
                    f=0;
            }
            if(f)
            {
                cout<<k;
                return 0;
            }

        }

        k++;
    }


}
