#include<stdio.h>
int main (void)
{
    int a[40];
    int i,n;
    a[0]=1;
    a[1]=1;
    for(i=2;i<40;i++)
        a[i]=a[i-1]+a[i-2];
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",a[n-1]);
    return 0;
}
