#include<stdio.h>
#include<string.h>
int main()
{
    char s[15];
    int i,j,count=0;
    gets(s);
    if(strlen)
    for(i=0,j=strlen(s)-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
            count++;
    }
    if(count==1 || (count==0 && strlen(s)%2))
        printf("YES");
    else
        printf("NO");
}
