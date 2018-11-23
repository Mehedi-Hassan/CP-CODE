#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n+9];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    int l = 0, r = 0, sz =1;

    for(int i=0;i<n;i++){
        int cnt =1, j;
        for(j=i+1; j<n;j++){
            if(a[j-1] + 1 == a[j])
                cnt++;
            else
                break;
        }

        if(cnt > sz){
            sz = cnt;
            l = i;
            r = j;
        }

        else if(cnt == sz && j == n && a[n-1] == 1000){
            l = i;
            r = j;
        }
    }

    if(sz == 1){
        cout<<0;
        return 0;
    }

    if((l == 0 && a[0] == 1) || (r == n && a[n-1] == 1000) ){
        cout<<sz - 1;
    }

    else
        cout<<sz - 2;




}
