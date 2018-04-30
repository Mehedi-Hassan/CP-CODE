#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    char str[105];
    int l,cnt=0,flag=1;
    scanf("%d",&l);
    getchar();
    for(int i=0;i<l;i++)
    {
        scanf("%c",&str[i]);
        if(str[i]=='1' && flag){printf("1"); flag=0;}
        else if(str[i]=='0') printf("0");
    }

}
