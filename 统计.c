#include<stdio.h>
void main (void)
{
  char c[50];
  int characters=0,other=0;
  char num[10]={'0','1','2','3','4','5','6','7','8','9'};
  char numbers[10];
  int i=0,j,k;
  for(j=0;j<10;j++)
    numbers[j]=0;
  c[i]=getchar();
  while(c[i]!='#')
  {
      i++;
      c[i]=getchar();
  }
  for(j=0;j<=i;j++)
  {
      if(c[j]>='0'&&c[j]<='9')
      {
          for(k=0;k<=9;k++)
            {if(c[j]==num[k])
                numbers[k]+=1;}
      }
      else if((c[j]>='a'&&c[j]<='z')||(c[j]>='A'&&c[j]<='Z'))
        characters+=1;
        else
            if(c[j]!='#')
            other+=1;
  }
  for(j=0;j<10;j++)
    printf("Number %d:%d\n",j,numbers[j]);
  printf("characters:%d\n",characters);
  printf("other:%d\n",other);
}
