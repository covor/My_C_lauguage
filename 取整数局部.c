#include<stdio.h>
int main(void)
{
    int i;
    scanf("%d",&i);
    while(i--)
    {
     unsigned short x,m,n;
     scanf("%hu%hu%hu",&x,&m,&n);
     if(m>=0&&m<=15&&n>=1&&n<=(16-m))
     {x=x>>m;
     x=x<<(16-n);
     printf("%d\n",x);}
    }
    return 0;
}
