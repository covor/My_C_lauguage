#include<stdio.h>
int main(void)
{
    int n,i,k,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       for(k=0;k<10;k++)
       {
           scanf("%d",&x);
           sum+=x;
       }
       printf("sum=%d\n",sum);
       sum=0;
    }
    return 0;
}
