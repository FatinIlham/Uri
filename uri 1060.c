#include<stdio.h>
int main()
{
  int a[10],i;
  int count=0;

for(i=0;i<7;i++)
  {

      scanf("%d",&a[i]);
  }

  for(i=0;i<7;i++)
    {
  if(a[i]>0)
  count++;
}

printf(" %d valores positivos\n",count);



}
