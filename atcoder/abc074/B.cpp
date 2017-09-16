#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K,x,sum=0;
    cin>>N>>K;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        if(x<K-x)
            sum+=x;
        else
            sum+=K-x;
    }
    cout<<sum*2<<endl;
    return 0;
}
