#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int a=0,b=0,c=0;
    scanf("%c",&ch);
    if(ch=='a') a++;
        else if(ch=='b') b++;
        else if(ch=='c') c++;
    char prev=ch;
    if(prev!='a') {printf("NO"); return 0;}
    while(scanf("%c",&ch)&& ch!='\n')
    {
        if(prev=='a' && ch=='c') {printf("NO"); return 0;}
        if(prev=='b' && ch=='a') {printf("NO"); return 0;}
        if(prev=='c' && ch=='b') {printf("NO"); return 0;}
        if(prev=='c' && ch=='a') {printf("NO"); return 0;}
        if(ch=='a') a++;
        else if(ch=='b') b++;
        else if(ch=='c') c++;
        prev=ch;
    }
    if((a!=0 && b!=0)&&(c==a || c==b))
    printf("YES");
    else
        printf("NO");
}
