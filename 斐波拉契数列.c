#include<stdio.h>
int main (void)
{
    int n,i;
    scanf("%d",&n);
    while(n!=0)
    {if(n>=1&&n<3)
        {printf("Error!\n");
        printf("\n");
        scanf("%d",&n);
        }

    while(n>=3)
    {
        int num[n];
        num[0]=1;num[1]=1;
        printf("%10d%10d",num[0],num[1]);
        for(i=2;i<n;i++)
        {
            num[i]=num[i-1]+num[i-2];
            printf("%10d",num[i]);
            if((i+1)%8==0)
                printf("\n");
        }
        printf("\n");
        if((n%8)!=0)
            printf("\n");
        scanf("%d",&n);
        if(n>=1&&n<3)
        {printf("Error!\n");
        printf("\n");
        scanf("%d",&n);}
        if(n==0)
        break;
    }
    }
    if(n==0)
    return 0;

}
