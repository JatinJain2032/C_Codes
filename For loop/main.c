#include <stdio.h>


int main()
{
  int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
           {
                printf("*");
           }
            printf("\n");
    }

    //Hollow rectangle
    printf("\n");
    int k,l;
    for(k=1;k<=5;k++)
    {
        for(l=1;l<=5;l++)
           {
               if (k==1 || k==5 || l==1 || l==5)
                printf("*");

                else
                    printf(" ");
           }
            printf("\n");
    }

    return 0;
}
