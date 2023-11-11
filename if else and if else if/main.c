#include <stdio.h>


int main()
{
   int i = 16;
   if(i>10)
   {
       printf("Greater \n");
   }
   else
   {
       printf("Smaller \n");
   }
  // if else if and else statement
   int a=6 , b=4 ,c=3;

   if(a>b && a>c)
   {
       printf("%d is greater",a);
   }

   else if (b>c)
   {
       printf("%d is greater", b);
   }

   else
   {
       printf("%d is greater", c);
   }
    return 0;
}
