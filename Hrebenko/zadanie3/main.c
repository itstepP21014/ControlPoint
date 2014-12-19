#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a,b;
    printf("a! ");
    scanf("%d",&a);
    printf("b! ");
    scanf("%d",&b);
    int s;

    while((b-a)!=0)
    {
        s=a;
        while(s!=b)
        {
            s++;
            printf("[%d,%d]\n",a,s);


        }
        a++;
    }





    return 0;
}
