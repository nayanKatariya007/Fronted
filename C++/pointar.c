#include <stdio.h>

int main()
{
    int a=5, b=10, *p, *s;
    p=&a;
    s=&b;

    

    printf("\n");
    printf("Before Swapping: ");

    printf("p: %u\n",&a);
    printf("s: %u\n",&b);


    printf("\nAfter Swapping: ");

    printf("p: %d\n",*p);
    printf("s: %d\n",*s);


}