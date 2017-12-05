#include<stdio.h>
int main (void)
{
    int a,b,c;
    char x;
   while( scanf("%d%d%d",&a,&b,&c)==3)
   {
    if(a>b)
    {
        if(b>=c)
            printf("B:%d\n",b);
        else
        {
            if(a>c)
                printf("C:%d\n",c);
            else
                printf("A:%d\n",a);
        }
    }
    else if(a<b)
    {
        if(a>=c)
           printf("A:%d\n",a);
        else
        {
            if(b>c)
             printf("C:%d\n",c);
            else
                printf("B:%d\n",b);
        }
    }
    else if(a=b)
          printf("A:%d\n",a);
    else if (x=getchar()==EOF)
    break;
   }

          return 0;
}

