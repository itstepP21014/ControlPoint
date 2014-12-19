#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n;

    int i= 1;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);

        while(i!=b)
        {

            if(a+i<b)
            {
                printf("(%d,%d)\n",a,b);
            }
            if(a<b-i)
            {
                printf("(%d,%d)\n",a,b-i);
            }
            if(a+i<b)
            {
                n=i+a;
                printf("(%d,%d)\n",n,b);
            }
            ++a;
            ++i;
        }
    return 0;
}
