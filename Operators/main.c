#include <stdio.h>


int main()
{
    // Relational operators
   int a=2,b=2;

   printf("a==b = %d\n", a==b);
   printf("a!=b = %d\n", a!=b);
   printf("a<b = %d\n", a<b);
   printf("a>b = %d\n", a>b);
   printf("a<=b = %d\n", a<=b);
   printf("a>=b = %d\n", a>=b);


//Logical operators

printf("a&&b= %d \n", a&&b);  //if both are integers then return true
printf("a||b= %d \n", a||b);  // any one are integers then true
printf("!b = %d\n", !b);  //  here value of b is true and !b is "not b" ,means it will return 0

//Bitwise operator . convert numbers in binary and then perform operation

printf("a^b=%d \n", a^b);
printf("a&b=%d \n", a&b);
printf("a|b=%d \n", a|b);







    return 0;
}
