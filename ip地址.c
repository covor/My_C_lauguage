#include<stdio.h>
int main(void)
{
    int i;
    scanf("%d",&i);
    while(i--)
    {unsigned long n,a,b,c,d;
    scanf("%lu",&n);
    a=(n&0xff000000)>>24;
    b=(n&0x00ff0000)>>16;
    c=(n&0x0000ff00)>>8;
    d=(n&0x000000ff);
    printf("%d.%d.%d.%d\n",d,c,b,a);}
    return 0;
}
