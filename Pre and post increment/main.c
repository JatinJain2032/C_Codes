#include <stdio.h>

int main()
{
   int i=1;
   int j;
   j=i++;

   printf("%d %d\n",j,i); //Post increment
int k=2;
   j= ++k;
   printf("%d %d", j,k); //pre increment
    return 0;
}
