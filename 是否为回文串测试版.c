#include<stdio.h>
int judge(char [],int,int);
int main(void)
{
	int n,m,p,i,g;
	scanf("%d",&n);
	getchar();
	for(m=0;m<n;m++)
	{
		char ai[1000];
		p=0;
		i=0;
		ai[p]=getchar();
		while(ai[p]!='\n'){p++;ai[p]=getchar();}
		g=judge(ai,p,i);
	if(g)printf("Yes!\n");
	else printf("No!\n");
}
}
int judge(char ai[],int l,int j )
{
	if(l==j)return 1;
	else if (ai[j]==ai[l-1-j])return judge(ai,l,j+1);
	else return 0;
	}

