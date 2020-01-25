#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define x       first
#define y       second

using namespace std;
bool cmp(pii a, pii b)
{
    if(a.y == b.y)
        return a.x<b.x;
    return a.y<b.y;
}
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,xx, yy, cnt = 0;
        cin>>n;

        vector<pii>a;
        for(int i=0;i<n;i++){
            cin>>xx>>yy;
            a.push_back(pii(xx, yy));
        }
        sort(a.begin(), a.end(), cmp);
        xx = a[0].x, yy =a[0].y;
        string ans;
        for(int i=0;i<a[0].x;i++){
            ans += 'R';
        }
        for(int i=0;i<a[0].y;i++){
            ans += 'U';
        }
//        cout<<ans<<endl;
        int d = 0;
        for(int i=1;i<n;i++){
//            cout<<xx<<" "<<yy<<endl;
//            cout<<a[i].x<<" "<<a[i].y<<endl;
            if(a[i].x < xx || a[i].y < yy){
                d = 1;
                cout<<"NO"<<endl;
                break;
            }
            for(int j=xx;j<a[i].x;j++){
                ans += 'R';
                xx++;
            }
            for(int j=yy;j<a[i].y;j++){
                ans += 'U';
                yy++;
            }
//            cout<<ans<<endl;
        }
        if(d == 0){
            cout<<"YES"<<endl<<ans<<endl;
        }

    }
}


