#include<stdio.h>
int main (void)
{
    int a,b,c,temp,m,n;

   scanf("%d%d",&a,&b);

    m=a;
    n=b;
    while(a!=0&&b!=0)

{
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    while (a%b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("%d ",b);
    printf("%d\n",b*(m/b)*(n/b));
    scanf("%d%d",&a,&b);
    m=a;
    n=b;
    }
    return 0;

}


