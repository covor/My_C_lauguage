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
        k=i;                 //����i��ֵ����k������ѭ������
        for(j=i+1;j<n;j++)         //����i��Ԫ�غ����Ԫ�����i��Ԫ�ؽ��бȽ�
            if(array[j]<array[k])   //�����k=i��Ԫ�غ����Ԫ��С��i��Ԫ�أ���������Ԫ�صı�ţ�                            �����ͽ���СԪ�صı�ŷŵ���ǰ��
                k=j;                //�������
            temp=array[k];          //ѭ�������󣬽�����������µ�Ԫ�ص�ֵ
            array[k]=array[i];
            array[i]=temp;
    }
}
