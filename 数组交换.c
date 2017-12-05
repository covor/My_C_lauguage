#include<stdio.h>
void exchange(int a[],int k,int n);
void main (void)
{
    int n,k,i;
    while (scanf("%d%d",&n,&k)!=EOF)
    {
        int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    exchange(a,k,n);
    for(i=0;i<n;i++)
        {
        if(i!=(n-1))
            printf("%d ",a[i]);
        else
            printf("%d\n",a[i]);

        }
    }


}
void exchange (int a[],int k,int n)
{
    int i,temp,j;
    for(i=0;i<k;i++)
    {
       temp=a[0];
       for(j=0;j<n-1;j++)
        a[j]=a[j+1];
       a[n-1]=temp;
    }
}
