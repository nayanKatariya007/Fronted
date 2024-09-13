#include <stdio.h>
int main()
{
    int guj = 76;
    int eng = 45;
    int sci = 43;
    int total;
    float per;

    total = guj + eng + sci;

    printf("%d \n",total);

    per=(total * 100)/300;

    printf("%f \n",per);

    return 0;
}