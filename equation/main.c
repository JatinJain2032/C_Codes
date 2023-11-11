#include <stdio.h>
#include <math.h>

int main()
{
    printf("We will print equation Y= x raise to n \n");
    printf("Enter the values for x and n \n");
    int   x, n;
    float power;
    scanf("%d %d\n",&x,&n);
     power=pow(x,n);
    printf("The value of Y=x raise to n is %f", power);

    return 0;
}

