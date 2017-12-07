#include<stdio.h>
void deal(int a[],int);
void main(void)
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int k,i;
        scanf("%d",&k);
        int a[k];
        for(i=0;i<k;i++)
            scanf("%d",&a[i]);
        deal(a,k);
        for(i=0;i<k-1;i++)
            printf("%d ",*(a+i));
        printf("%d\n",*(a+k-1));
    }
}
void deal (int a[],int k)
{
    int temp,i;
    for(i=0;i<k/2;i++)
    {
        temp=*(a+i);
        *(a+i)=*(a+k-1-i);
        *(a+k-1-i)=temp;
    }
}
