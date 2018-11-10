#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l;
    cin>>n>>m>>l;
    long long a[n+9];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;

    for(int i=0;i<n;i++){
        int cnt =0;
        if(a[i] > l){
            while(a[i++] > l)
                cnt++;
            i--;

            ans++;
        }
    }

    int tp, idx, d;

    for(int i=0;i<m;i++){
        cin>>tp;

        if(tp == 0)
            cout<<ans<<endl;
        else{
            cin>>idx>>d;
            idx--;

            if(n==1){
                a[idx] += d;

                if(a[idx] >l)
                    ans =1;

                continue;

            }

            if( a[idx] <= l && a[idx] + d>l){

                if( idx-1 >=0 && idx+1 <n){
                    if(a[idx-1] > l && a[idx+1] >l)
                        ans--;
                    else if(a[idx-1] <= l && a[idx+1] <=l)
                        ans++;
                }

                else if(idx==0 && a[idx+1]<=l) {
                    ans++;
                }

                else if(idx == n-1 && a[idx-1]<=l){
                    ans++;
                }


            }


            a[idx] += d;
        }
    }


}
