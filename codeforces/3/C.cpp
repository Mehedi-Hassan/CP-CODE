#include<bits/stdc++.h>
using namespace std;

char a[4][4];
int x,o;

int dx(int i, char c){
    if( a[i][0]==c && a[i][0]==a[i][1] && a[i][0]==a[i][2] )
        return 1;
    else return 0;
}

int dy(int j, char c){
    if( a[0][j]==c && a[0][j]==a[1][j] && a[0][j]==a[2][j] )
        return 1;
    else return 0;
}

int dig1( char c){
    if( a[0][0]==c && a[0][0]==a[1][1] && a[0][0]==a[2][2] )
        return 1;
    else return 0;
}

int dig2( char c){
    if( a[2][0]==c && a[2][0]==a[1][1] && a[2][0]==a[0][2] )
        return 1;
    else return 0;
}


int main()
{
    x=o=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if(a[i][j] == 'X') x++;
            else if(a[i][j] == '0') o++;
        }
    }


    if(x-o>1 || x-o<0 || ( ( dx(0,'X') || dx(1,'X') || dx(2,'X') || dy(0,'X') || dy(1,'X') || dy(2,'X') || dig1('X') || dig2('X') ) && o==x) || ( ( dx(0,'0') || dx(1,'0') || dx(2,'0') || dy(0,'0') || dy(1,'0') || dy(2,'0') || dig1('0') || dig2('0') ) && x>o)) cout<<"illegal";
    else if( dx(0,'X') || dx(1,'X') || dx(2,'X') || dy(0,'X') || dy(1,'X') || dy(2,'X') || dig1('X') || dig2('X') )
            cout<<"the first player won";
    else if( dx(0,'0') || dx(1,'0') || dx(2,'0') || dy(0,'0') || dy(1,'0') || dy(2,'0') || dig1('0') || dig2('0') )
            cout<<"the second player won";
    else if(x==5 && o==4)
            cout<<"draw";
    else if(x==o)
        cout<<"first";
    else
        cout<<"second";

}
