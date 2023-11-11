#include <stdio.h>


int main()
{
  int a,b;

  printf("Input tow integer numbers");
  scanf("%d %d",&a,&b);
  printf("\n %d+%d=%d",a,b,a+b);
  printf("\n %d-%d=%d",a,b,a-b);
  printf("\n %d/%d=%d",a,b,a/b);
  printf("\n %d*%d=%d",a,b,a*b);
  printf("\n %d %% %d=%d",a,b,a%b);
    return 0;
}
