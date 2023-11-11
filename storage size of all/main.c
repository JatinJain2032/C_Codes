#include <stdio.h>
#include <limits.h>

int main()
{
    int a;
    char b;
    float c;
    double d;
    short e;
    long f;
    signed g;
    unsigned h;
    long long i;
    printf("storag size for int data type: %d is \n ", sizeof(a));
    printf("storag size for char data type: %d is \n ", sizeof(b));
    printf("storag size for float data type: %d is \n ", sizeof(c));
    printf("storag size for double data type: %d is \n ", sizeof(d));
    printf("storag size for short data type: %d is \n ", sizeof(e));
    printf("storag size for long data type: %d is \n ", sizeof(f));
    printf("storag size for signed data type: %d is \n ", sizeof(g));
    printf("storag size for unsigned data type: %d is \n ", sizeof(h));
    printf("storag size for long long data type: %d is \n ", sizeof(i));
    return 0;
}
