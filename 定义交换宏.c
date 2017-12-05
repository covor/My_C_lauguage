#include<stdio.h>
 int swap(int *a,int *b);
int main (void)
{
 int i=1,a,b;
 while   (scanf("%d %d",&a,&b)!=EOF)
 {

     printf("Case %d:\n",i);
     printf("Before Swap:a=%d b=%d\n",a,b);
     swap(&a,&b);
     printf("After Swap:a=%d b=%d\n",a,b);
     printf("\n");
     i+=1;
 }
 return 0;
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
   *y=temp;
}
