#include<stdio.h>
#define pi 3.14159
int main()
{
  double R,VOLUME;
  scanf("%lf",&R);
  VOLUME = (4.0/3) * pi * (R*R*R);
  printf("VOLUME = %0.3lf\n",VOLUME);
}
