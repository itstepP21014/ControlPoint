#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r=n;
    printf("Enter the nunber > 0: ");
    scanf("%d", &n);
    if (n<=0)
    {
        printf("\nWTF???? Are you the fool?\a\a\a\n");
    }
    else
    {
        for (int i=n/2; i>0; --i)
        {
            r*=n;
            printf("%d ", n);
            n-=2;
        }
         printf("\n%d", r);
    }
    return 0; //I know that it is a shitcode.
}
