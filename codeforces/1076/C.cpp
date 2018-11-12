#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int t;
    cin>>t;

    while(t--){
        cin>>n;

        if( (n*n - 4.0*n ) < 0){
            cout<<"N"<<endl;
        }

        else{
            double a = n + sqrt( n*n - 4.0*n);
            a /= 2.0;

//            cout<<a<<endl;
            printf("Y %.9f %.9f\n", a, n-a);
        }
    }
}
