#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pi=3.14;
    int r=1;
    int v,s;
    printf("Enter number:");
    scanf("%d",&r);
    if(r>0)
    {
        v=4/3*pi*(r*r*r);//цалалікавае дзяленне
        s=4*pi*(r*r);
        printf("V = %d\nS = %d",v,s);
    }
    else{
        printf("Error!!!");
    }
    return 0;
}
