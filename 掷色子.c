#include<stdio.h>
#include<stdlib.h>
int f(int x);
int main()
{
    int N,x,y;
    int a,b;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&x,&y);
        if(((f(x)%6)+(f(y)%6+2)==2)||((f(x)%6)+(f(y)%6+2)==3)||((f(x)%6)+(f(y)%6+2)==12))
        printf("fail!\n");
        if(((f(x)%6)+(f(y)%6+2)==7)||((f(x)%6)+(f(y)%6+2)==11))
        printf("success!\n");
        if(((f(x)%6)+(f(y)%6+2)!=7)&&((f(x)%6)+(f(y)%6+2)!=11)&&((f(x)%6)+(f(y)%6+2)!=2)&&((f(x)%6)+(f(y)%6+2)!=3)&&((f(x)%6)+(f(y)%6+2)!=12))
        {
            a=(f(x)%6)+(f(y)%6+2);x=x+1;y=y+1;
        while(((f(x)%6)+(f(y)%6+2)!=a) && ((f(x)%6)+(f(y)%6+2)!=7))
        {
            x+=1;
            y+=1;
        }
        if((f(x)%6)+(f(y)%6+2)==7)
        printf("fail!\n");
        if((f(x)%6)+(f(y)%6+2)==a)
        printf("success!\n");
        }
    }
    return 0;
}
int f(int x)
{
    int sum=0;
    for(;x/10!=0;x=x/10)
    sum+=(x%10);
    sum+=(x%10);
    return sum;
}
