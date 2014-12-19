#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n;
    do
    {
        printf("enter n =\n");
        scanf("%d",&n);
    }
    while(!(n%2));
    int k=n;
    int g=1;
    for(int i=0; i<n; i++)
    {
        for(int q=1; q<=n; q++)
        {
            if(q==g||q==k)
            {
                printf("y");

            }
            else
            {
                printf(" ");
            }
        }
        if(g!=k)
        {
            g++;
            k--;

        }
        printf("\n");
    }



    return 0;
}
