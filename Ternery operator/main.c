#include <stdio.h>

/* The ternary operator is an operator that takes three arguments.
The first argument is a comparison argument, the second is the result upon a true comparison, and the third is the result upon a false comparison.
If it helps you can think of the operator as shortened way of writing an if-else statement.
It is often used as a way to assign variables based on the result of an comparison.
When used correctly it can help increase the readability and reduce the amount of lines in your code.
*/
int main()
{
    // Fromula: condition?exp1:exp2

    int i=1;
    int j=0;

    j=i==1?5:6;
    printf("%d",j);

    //output will be j=5 if i=1 else output will be 6

    printf(" \n same thing In if else format");

    int a=1, b=0;

    if(a==1)
        b=5;
    else
        b=6;
    printf(" \n%d",b);
    return 0;
}
