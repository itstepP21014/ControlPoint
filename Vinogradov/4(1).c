#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r, V, S;
    printf("Enter the nunber: ");
    scanf("%lf",&r);
    V=(4/3)*(r*r*r)*3.14;// 4/3 цалалікавае дзяленне, таму будзе неверны вынік
    S=4*3.14*(r*r);
    printf("V=%f, S=%f", V, S);
    return 0;
}
