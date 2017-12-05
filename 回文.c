#include<stdio.h>
#include<string.h>
int judge(char c[],int ,int );
void main (void)
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n)
    {
        char c[100];
        int i;
        for(i=0;;i++)
        {
            c[i]=getchar();
            if(c[i]=='\n')
            {
                c[i]='\0';
                break;
            }

        }
        int l=strlen(c)-1,k=0;
        if(judge(c, k, l))
            printf("Yes!\n");
        else printf("No!\n");
        n--;
    }
}
int judge(char c[],int k,int l)
{
    if(l<=k) return 1;
    else if(c[k]!=c[l]) return 0;
    else if(c[k]==c[l]&&l!=k) return judge(c,k+1,l-1);
}
