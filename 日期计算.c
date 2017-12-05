#include<stdio.h>
int main (void)
{
    int year,month,day,x,i,k;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d%d%d",&year,&month,&day)!=EOF)
    {
        x=0;
        if((year%4==0&&year%100!=0)||(year%400==0))
        {
           for(i=0;i<month-1;i++)
                x+=b[i];
           x+=day;
           printf("该日期是这一年中的第%d天\n",x);
        }
        else
        {
          for(k=0;k<month-1;k++)
                x+=a[k];
           x+=day;
           printf("该日期是这一年中的第%d天\n",x);
        }
    }
    return 0;

}
