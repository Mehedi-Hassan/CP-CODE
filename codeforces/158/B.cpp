#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[100000],c=0,p1=0,p2=0,p3=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==4)
        c++;
        if(a[i]==3)
        p3++;
        if(a[i]==2)
        p2++;
        if(a[i]==1)
        p1++;
    }
    c+=p3;
    p1-=p3;
    c+=p2/2;
    if(p2%=2)
    {
        c++;
        
        p1-=2;
    }
    if(p1>0)
    {
        if(p1%4)
        c+=p1/4+1;
        else
        c+=p1/4;
    }
    printf("%d",c);
    return 0;
}

