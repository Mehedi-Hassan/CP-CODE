#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+9];
    int p = 0, N = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] > 0) p++;
        if(a[i] < 0) N++;
    }


    n = ceil((double)n/2);
//    cout<<p<<" "<<N<<" "<<n<<endl;
    if(p >= n) cout<<1;
    else if( N >= n) cout<<-1;
    else cout<<0;

}
