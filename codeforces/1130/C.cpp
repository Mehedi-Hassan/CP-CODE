#include<bits/stdc++.h>
using namespace std;
#define pii          pair<int, int>


int vis[60][60];
int n, val;

vector <pii > v1, v2;
int a[60][60];

void func(int x, int y)
{
    if(x<0 || x>= n || y<0 || y>= n || a[x][y] == 1 || vis[x][y])
        return;

    a[x][y] = val;
    vis[x][y] = 1;

    if(val == 2) {
        v1.push_back(pii(x, y));
//        cout<<x<<" "<<y<<endl;
    }
    else{
        v2.push_back(pii(x, y));
    }

    func(x+1, y);
    func(x-1, y);
    func(x, y+1);
    func(x, y-1);

}
int main()
{

    cin>>n;

    int r1, r2, c1, c2;

    cin>>r1>>c1;
    cin>>r2>>c2;

    string s[n+9];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j] == '0'){
                a[i][j] = 0;
            }
            else{
                a[i][j] = 1;
            }
        }
    }

    val = 2;
    func(r1-1, c1-1);

    if(a[r2-1][c2-1] == 2){
        cout<<0;
        return 0;
    }

    val = 3;
    func(r2-1, c2-1);

    int dis = 1000000;

//    cout<<v1.size()<<" "<<v2.size()<<endl;

    for(int i=0; i<v1.size(); i++){
        int x1 = v1[i].first+1;
        int y1 = v1[i].second+1;

        for(int j=0; j<v2.size();j++){

            int x2 = v2[j].first+1;
            int y2 = v2[j].second+1;

            dis = min(dis, (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) );
        }
    }

    cout<<dis;
}
