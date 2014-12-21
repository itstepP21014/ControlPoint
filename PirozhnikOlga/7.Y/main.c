#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chislo, seredina, n, k, str, i;
    printf("Vvedite nechetnoe chislo:\n");
    scanf("%d", &chislo);//тут была памылка

    while(chislo % 2 == 0)
    {
        printf("Ne verno!\n");
        printf("Vvedite nechetnoe chislo:\n");
        scanf("%d", &chislo);
    }

    seredina = chislo / 2;
    k = chislo;
    n = 1;    k = chislo;


    for(str = 1; str <= seredina; ++str)//тут крыху памежныя умовы іншыя
    {
        for(i = 1; i <= chislo; ++i)
        {
            if(i == n || i == k)
            {
                printf("Y");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
        i = 1;
        ++n;//а тут наадварот было
        --k;// і тут
    }

    //n = seredina - 1 / 2;//непатрэбны радок

    //тут перамудрылі
    //вось такі варыянт працуе:
    /*
    for(; str <= chislo; ++str)
    {
        for(i = 1; i <= n; ++i)
        {
            if(i == n)
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
    /*/
    for(i = 1; i <= chislo; ++i)
    {
        printf("str = %d, n = %d\n", str, n);
        for(str; str < n; ++str)
        {
            while(i < chislo) //а тут напісалі for
            {
                if(i == n)
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
