#include<stdio.h>
long process(long a, long b);
int main (void)
{
    long n,k;
    while(scanf("%ld%ld",&n,&k)!=EOF)
        printf("%ld\n",process(n,k));
    return 0;
}
long process(long a,long b)
{
    int j;
    for(j=0;j<b-1;j++)
        a/=10;
        if(a>0)
            return a%10;
        else
        return -1;
}
