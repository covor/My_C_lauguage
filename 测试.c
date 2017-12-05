#include<stdio.h>
int main (void)
{
    int f,i,sum=0;
    int a;
    scanf("%d",&f);
    while(f!=0)
    {
        a=f%10;
        f/=10;
        i+=1;
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}
