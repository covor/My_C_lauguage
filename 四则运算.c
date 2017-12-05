#include <stdio.h>
int main (void)
{
    int t;
    double a,b,result;
    char c;
    while(scanf("%d%lf%lf",&t,&a,&b)!=EOF)
    {
    getchar();
    scanf("%c",&c);
    if(t==0)
    {
        if(c=='+')
        {
            result=a+b;
            printf("After if-else processing,the result is : %.2f\n",result);
            printf("\n");
        }
        else if(c=='-')
        {
            result=a-b;
             printf("After if-else processing,the result is : %.2f\n",result);
            printf("\n");
        }
        else if(c=='*')
        {
                result=a*b;
         printf("After if-else processing,the result is : %.2f\n",result);
            printf("\n");
        }
        else
        {
            result=a/b;
             printf("After if-else processing,the result is : %.2f\n",result);
            printf("\n");
        }
    }
    else if(t==1)
    {
        switch(c)
        {
        case '+':
            result=a+b;
            printf("After switch processing,the result is : %.2f\n",result);
            printf("\n");
            break;
        case '-':
            result=a-b;
             printf("After switch processing,the result is : %.2f\n",result);
            printf("\n");
            break;
        case '*':
             result=a*b;
         printf("After switch processing,the result is : %.2f\n",result);
            printf("\n");
            break;
        case '/':
            result=a/b;
             printf("After switch processing,the result is : %.2f\n",result);
            printf("\n");
            break;
        }
    }
    else if(t==2)
    {
        if(c=='+')
        {
            result=a+b;
            printf("After if-else processing,the result is : %.2f\n",result);
        }
        else if(c=='-')
        {
            result=a-b;
             printf("After if-else processing,the result is : %.2f\n",result);
        }
        else if(c=='*')
        {
                result=a*b;
         printf("After if-else processing,the result is : %.2f\n",result);
        }
        else
        {
            result=a/b;
             printf("After if-else processing,the result is : %.2f\n",result);
        }
        switch(c)
        {
        case '+':
            result=a+b;
            printf("After switch processing,the result is : %.2f\n",result);printf("\n");
            break;
        case '-':
            result=a-b;
             printf("After switch processing,the result is : %.2f\n",result);printf("\n");
            break;
        case '*':
             result=a*b;
         printf("After switch processing,the result is : %.2f\n",result);printf("\n");
            break;
        case '/':
            result=a/b;
             printf("After switch processing,the result is : %.2f\n",result);
             printf("\n");
            break;
        }
    }
  }
  return 0;
  }

