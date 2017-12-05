#include <stdio.h>
int main (void)
{int n,i,x,k,sum,plus_num=0,t;
double average;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
    	scanf("%d",&t);
    	if(t==1)
    	{
	       for(k=0;k<10;k++)
     	  {
		     scanf("%d",&x);
		     while(x>0)
		     {plus_num+=1;
	    	  sum+=x;
	    	  average=sum/10;}
	      }
	      while(plus_num!=0)
	    	  printf("In \"no continue\" way,numbers=%d,average=%.6f\n",plus_num,average);
	    }
	    if(t==0)
	    {
	    	  for(k=0;k<10;k++)
     	  {
		     scanf("%d",&x);
		     while(x>0)
		    {

		     plus_num+=1;
	    	  sum+=x;
	    	  average=sum/10;}

	      }
	      while(plus_num!=0)
	    	  printf("In \"continue\" way,numbers=%d,average=%.6f\n",plus_num,average);
		}


    }

	return 0;
 }
