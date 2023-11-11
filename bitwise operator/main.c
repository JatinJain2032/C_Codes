#include <stdio.h>


int main()
{
    int result= 25& 15;
    printf("%d \n", result);

    int a= 25|15;
    printf("%d \n", a);

    //left and right sift bitwise operator

    /* x=16
      x<<2  shift x by 2 on left side
       binary of 16 is  10000 and after shift it will be 1000000
       which is 64
    */

    int x= 16;
    int y= x<<2;
    printf("%d \n", y);

    // right shift operator
    // after right shift binary of 16 will become 100 which is 4
     int w=16;
     int z= x>>2;
     printf("%d", z);

    return 0;

}
