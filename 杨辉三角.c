#include<stdio.h>
void main (void)
{
    int n;
scanf("%d",&n);
while(n!=0)
{
    int a[n][n];
   int i,j,k;
   for(i=0;i<n;i++)
    a[i][0]=1;
   for(i=0;i<n;i++)
    a[i][i]=1;
   for(i=2;i<n;i++)
   {
    for(j=1;j<i;j++)
    a[i][j]=a[i-1][j-1]+a[i-1][j];
   }
   for(i=0;i<n;i++)
   {
       for(k=0;k<n-i-1;k++)
       printf("  ");
       printf("%d",a[i][0]);
       for(j=1;j<i+1;j++)
       printf("%4d",a[i][j]);
       printf("\n");
   }
   printf("\n");
   scanf("%d",&n);

}
}
