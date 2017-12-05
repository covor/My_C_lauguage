#include<stdio.h>
void sa(int array[],int);
void main (void)
{
    int n;
    scanf("%d",&n);
    while(n)
    {
     int a[n];
     int i;
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     sa(a,n);
     for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
        printf("%d\n",a[n-1]);
        scanf("%d",&n);

    }
}
void sa(int array[],int n)
{
    int i,j,k,temp;
    for(i=0;i<10;i++)
    {
        k=i;                 //保存i的值，用k来进行循环排序
        for(j=i+1;j<n;j++)         //将第i个元素后面的元素与第i个元素进行比较
            if(array[j]<array[k])   //如果第k=i个元素后面的元素小于i号元素，交换两个元素的标号，                            这样就将最小元素的标号放到最前面
                k=j;                //交换标号
            temp=array[k];          //循环结束后，交换两个标号下的元素的值
            array[k]=array[i];
            array[i]=temp;
    }
}
