#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char s[100];
    gets(s);
    for(i=0;i<(strlen(s)-1);i++)
    {
        if(s[i]=='V' && s[i+1]=='K')
        {
            count++;
            s[i]='P';
            s[i+1]='Q';
        }
    }
    for(i=0;i<(strlen(s)-1);i++)
    {
        if(s[i]=='V' && s[i+1]!='P')
        {
            count++;
            break;
        }
        else if(s[i+1]=='K' && s[i]!='Q')
        {
            count++;
            break;
        }
    }
    printf("%d",count);
    return 0;
}
