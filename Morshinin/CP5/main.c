#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f1, f2;
    printf("Enter number\n:");
    scanf("%d",&n);
    f1 = 1;
    f2 = n;
    if (n >= 0)
    {
        while (f2 >= 1)
        {
            f1 *= f2;
            printf("%d!! %2d = %d!\n", n, f2, f1);
            f2=f2-2;
        }
    }
    else
    printf("Number 0>1..3..5..\n");
return 0;
}
