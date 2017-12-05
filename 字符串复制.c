#include<stdio.h>
void mycpy(char [],char[],int n);
void main (void)
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n)
    {
        int i=0,k;
        char t[50];
        t[i]=getchar();
        while(t[i]!='\n')
        t[++i]=getchar();
        char s[50];
        scanf("%d",&k);
        getchar();
        mycpy(t,s,k);
        n--;
    }
}
void mycpy(char t[],char s[],int k)
{
    int i;
    for(i=0;i<=k;i++)
    {
        s[i]=t[i];

    }
    for(i=0;i<k;i++)
            putchar(s[i]);
        printf("\n");
        for(i=0;i<=49;i++)
            s[i]='\0';
}
