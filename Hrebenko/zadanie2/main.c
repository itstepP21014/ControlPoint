#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pls enter!\n");
    int userNumber;
    scanf("%d",&userNumber);
    double rez;

    rez=(4.0*3.1415926535*userNumber*1.0*userNumber*1.0*userNumber)/3;
    printf("ob'iom V=%.3f\n",rez);
    rez=(4.0*3.1415926535*userNumber*userNumber);
    printf("ploshad S=%.3f",rez);
    return 0;
}
