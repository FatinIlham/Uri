#include<stdio.h>
int main()
{

 int n,t,k;
 scanf("%d",&t);
 for(k=1;k<=t;k++){

 scanf("%d",&n);
 if(n==0)
 printf("NULL\n");

 if(n>0)
 {
   if(n%2!=0)
   printf("ODD POSITIVE\n");
   else
   printf("EVEN POSITIVE\n");

 }
 if(n<0){
 if(n%2==0)
   printf("EVEN NEGATIVE\n");
else
    printf("ODD NEGATIVE\n");
 }


 }















}
