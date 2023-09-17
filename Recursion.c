#include<stdio.h>
int natural(int);
int main()
{
   int a ;
   printf("enter the value");

   scanf("%d",&a);
   natural(a);
   
   return 0;
   
   
}
int natural(int n)
{
  if(n==0)
  return 0;
  

 else
  n=1+natural(n-1);
  printf("%d",n);
  return n;

 
}


