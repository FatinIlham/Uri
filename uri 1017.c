#include<stdio.h>
 main()
{
  int time,speed;
  float Fuel;
  scanf("%d",&time);
  scanf("%d",&speed);
  Fuel = (time*speed);
  Fuel = Fuel/12;
  printf("%0.3f\n",Fuel);

}
