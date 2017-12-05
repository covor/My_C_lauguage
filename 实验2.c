#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c,p,area;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        p=a+b+c;
        p/=2;
        area=(float)sqrt(p*(p-a)*(p-b)*(p-c));
        printf("area=%.6f\n",area);
    }
    return 0;
}
