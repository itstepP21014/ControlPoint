#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r,V,S;
    double pi=3.141592;

    printf("Enter double number!\n:");
    scanf("%lf",&r);

    V=4/3*pi*(r*r*r);// у вас цэлалікавае дзяленне
    S=4*pi*(r*r);

    printf("S=%f\nV=%f\n",S,V);
    return 0;
}
