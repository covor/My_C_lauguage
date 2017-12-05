#include<stdio.h>
void main (void)
{
    int n;
    double s;
    scanf("%f",&s);
    while(s!=0)
    {if(s<1000)
    printf("%f\n",0);
    if(s>=1000&&s<2000)
    printf("%f\n",(s-1000)*0.05);
    else if(s>=2000&&s<3000)
    printf("%f\n",(s-2000)*0.1+50);
    else if(s>=3000&&s<4000)
    printf("%f\n",(s-3000)*0.15+150);
    else if(s>=4000&&s<5000)
    printf("%f\n",(s-4000)*0.2+300);
    else if(s>=5000)
    printf("%f\n",(s-5000)*0.25+500);
    scanf("%f",&s);
    }
}
