#include<stdio.h>
int sum (int h);
int main (void)
{
    int n,i,a,b,x1,x2,k=0,g,num;
    g=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int p,q;
        scanf("%d%d",&a,&b);
        kaishi:
        a=sum(a);
        b=sum(b);


        for(p=0;p<a;p++)
        {
            x1+=1;
            if(x1>6)
                x1-=6;
        }
        for(q=0;q<a;q++)
        {
            x2+=1;
            if(x2>6)
                x2-=6;
        }
        k+=1;
        num=x1+x2;
        if((x1+x2)==7||(x1+x2)==11)
        {
            printf("success!\n");
            g=0;
            break;
        }
        if((x1+x2)==2||(x1+x2)==3||(x1+x2)==12)
        {
            printf("fail!\n");
            g=0;
            break;
        }
        if((k!=1&&(x1+x2)==7))
        {
            printf("fail!\n");
            break;
        }
        while(g!=0)
        {
            a=a+k-1;
            b=b+k-1;
            goto kaishi;

        }



    }
    return 0;

}
int sum (int h)
{
    int f,i,sum;
    int a;
    while(h!=0)
    {
        a=h%10;
        h/=10;
        i+=1;
        sum+=a;
    }
    return sum;
}
