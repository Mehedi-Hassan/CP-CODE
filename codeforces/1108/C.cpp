#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string s, t, ls[10] = {"RGB", "GRB", "BGR", "RBG", "BRG", "GBR"};
    cin>>s;

    int ans = n, ak = 0;

    for(int k=0; k<6;k++){
        string st = ls[k];
        int cnt = 0;

        for(int i=0;i<n;i++){
            if(s[i] != st[0])
                cnt++;
            if(i+1 == n)
                break;

            if(s[i+1] != st[1])
                cnt++;
            if(i+2 == n)
                break;

            if(s[i+2] != st[2])
                cnt++;

            i+=2;
        }
//        cout<<cnt<<endl;
        if(cnt < ans)
            ak = k;

        ans = min(ans, cnt);
    }
    for(int i=0; i<n/3 +1; i++)
        t+= ls[ak];

    cout<<ans<<endl;

    for(int i=0;i<n;i++)
        cout<<t[i];
}
