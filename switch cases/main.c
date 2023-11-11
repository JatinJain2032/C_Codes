#include <stdio.h>


int main()
{
    int i=5;

    switch(i)
    {
        case 0:
        printf("zero");
          break;
        case 1:
        printf("one");
        break;

        case 2:
        printf("Two");
        break;

        case 3:
        printf("Three");
        break;

        case 4:
        printf("Four");
        break;

        default:
            printf("Not a valid number");
    }
    return 0;
}
