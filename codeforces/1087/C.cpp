#include<bits/stdc++.h>
using namespace std;
#define ll long long

int x[5] = {1, 0, -1, 0};
int y[5] = {0, 1, 0, -1};
map< int, int> m[10000];

int a[1009][1009];
map< int, int> mx;
map< int, int> my;

void fun(int px, int py)
{
    for(int i=0; i<=1000;i++){
        a[px][i]++;
        a[i][py]++;
    }


}

void print(int ax, int ay, int px, int py)
{
    int i, j;

    for(i = min(ax, px), j = ay; i<=max(ax, px); i++){

        if(m[i][j] == 0)
        cout<<i<<" "<<j<<endl;

        m[i][j] = 1;
    }

    for(i = px, j = min(ay, py); j<=max(ay, py); j++){

        if(m[i][j] == 0)
        cout<<i<<" "<<j<<endl;

        m[i][j] = 1;
    }

}
int main()
{
    int ax, ay, bx, by, cx, cy, px, py;

    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;

    fun(ax, ay);
    fun(bx, by);
    fun(cx, cy);

    int dis = 10000009;

    for(int i=0; i<=1000; i++){
        for(int j=0;j<=1000; j++){
            if(a[i][j] > 1){
                int x = abs(ax - i) + abs(ay - j);
                x += abs(bx - i) + abs(by - j);
                x += abs(cx - i) + abs(cy - j);

                if(x < dis){
                    px = i;
                    py = j;
                    dis = x;
                }
            }
        }
    }

    int x = abs(ax - px) + abs(ay - py);
    x += abs(bx - px) + abs(by - py);
    x += abs(cx - px) + abs(cy - py);
    x++;

    cout<<x<<endl;

    print(ax, ay, px, py);
    print(bx, by, px, py);
    print(cx, cy, px, py);

}
