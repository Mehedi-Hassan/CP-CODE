#include<bits/stdc++.h>
using namespace std;
int n, a[20];

int fun(int idx, int sum)
{

    if(sum >= 360){
        sum -= 360;
    }

    if(sum<= -360)
        sum += 360;

//    cout<<sum<<endl;
    if(idx == n ){
        if(sum == 0)
            return 1;
        else
            return 0;
    }

    return(fun(idx+1, sum+a[idx]) || fun(idx+1, sum-a[idx]));
}
int main()
{

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(fun(0, 0))
        cout<<"YES";
    else
        cout<<"NO";



}
