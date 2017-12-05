#include<stdio.h>
void main (void)
{
    int n;
    scanf("%d",&n);
    getchar();

    while(n)
    {
        char a[50];
        scanf("%s",a);
        int t,sum=0,i;
        for(i=2;a[i];i++)
        {
            if(a[i]>='0'&&a[i]<='9')
            t=(a[i]-'0');
            else if(a[i]>='a'&&a[i]<='z')
                    t=(a[i]-'a'+10);
            else if(a[i]>='A'&&a[i]<='Z')
                t=(a[i]-'A'+10);
            sum=sum*16+t;

        }
        printf("%d\n",sum);
        n--;
    }
}
