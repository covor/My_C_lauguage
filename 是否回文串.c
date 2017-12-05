#include<stdio.h>
#include<string.h>
int judge(char c[],int i,int k);
void main (void)
{
    int n,m;
    scanf("%d",&n);
    getchar();
    while(n)
    {
        char c[50];
        for(m=0;;m++)
        {
            if( c[m]=getchar()=='\n')
            {
                c[m]='\0';
                break;
            }
        }
        int l=strlen(c);
        int i=0,k=l-1;
        if(judge(c,i,k)==1)
            printf("Yes!\n");
        else
            printf("No!\n");

        n--;

    }
}
int judge(char c[],int i,int k)
{
    if(c[i]==c[k]&&i!=k&&c[i+1]!=c[k])
        return judge(c,i+1,k-1);
     else if(c[i]!=c[k])
            return 0;
     else if(i==k||((i+1==k)&&c[i+1]==c[k]))
        return 1;

}
