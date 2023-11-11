#include <stdio.h>

int main()
{
    int i, num, a;
    printf("Enter the number of which you want table \n");
    scanf("%d", &num);

   printf("table of %d is \n", num);
    for(i=1;i<=10;i++)
    {
        a=num*i;
       printf("%d \n",a);
    }


    return 0;
}
