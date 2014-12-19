#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chislo, seredina, n, k, str, i;
    printf("Vvedite nechetnoe chislo:\n");
    scanf("%d"), &chislo;
    while(chislo%2==0)
    {
        printf("Ne verno!\n");
        printf("Vvedite nechetnoe chislo:\n");
        scanf("%d", &chislo);
    }
    seredina=chislo/2;
    k=chislo;
    n=1;
    for(str=1; str<seredina;++str)
    {
        for(i=1; i<=chislo; ++i)
        {
            if(i==n||i==k)
            {
                printf("Y");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        i=1;
        --n;
        ++k;
    }
    n=seredina-1/2;
    for(i=1; i<=chislo; ++i)
        {
            for(str; str<n; ++str)
            {
                for(i<chislo)
                {
                    if(i==n)
                    {
                        printf("Y");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    return 0;
}
