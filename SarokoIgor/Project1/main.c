#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r;
    double v,s;
    scanf ("%lf",&r);
    v=(4.0*3.14*pow(r,3))/3;
    s=4.0*3.14*pow(r,2);
    printf ("volume of a sphere: %f; area of a sphere %f",v,s);
    printf("Hello world!\n");
    return 0;
}
