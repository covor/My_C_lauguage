#include <stdio.h>
int main (void)
{
    int n,i,t,x,k,plus_num;
    double average,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if (t)
        {
            for(sum=0,plus_num=0,k=0;k<10;k++)
            {scanf("%d",&x);
            if(x>0)
                {sum+=x;
                plus_num+=1;
                    average=sum/plus_num;
                }
             else
                    continue;
            }
            if (plus_num!=0)
            printf("In \"no continue\" way,numbers=%d,average=%.6f\n",plus_num,average);
        }
        else
        {
            for(sum=0,plus_num=0,k=0;k<10;k++)
            {scanf("%d",&x);
            if(x>0)
                {sum+=x;
                plus_num+=1;
                    average=sum/plus_num;

                }

            }
            if(plus_num!=0)
           printf("In \"continue\" way,numbers=%d,average=%.6f\n",plus_num,average);
        }
    }
    return 0;
}
