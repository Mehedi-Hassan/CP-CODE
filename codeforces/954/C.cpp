#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,a[200009],x=1,y;
    scanf("%ld",&n);
    for(long i=0;i<n;i++)
        scanf("%ld",&a[i]);
    y=1;
    for(long i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]){
            printf("NO");
                return 0;
        }
        if(abs(a[i]-a[i+1])>1)
        {
            y=abs(a[i]-a[i+1]);
            break;
        }

    }
    if(y!=1){
    for(long i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])>1){
            if(abs(a[i]-a[i+1])!=y){
                printf("NO");
                return 0;
            }
        }
        else
        {
            if(min(a[i],a[i+1])%y==0){
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES\n");
    printf("1000000000 %ld",y);
    return 0;
    }
    printf("YES\n");
    printf("1000000000 %ld",y);
    return 0;
}
