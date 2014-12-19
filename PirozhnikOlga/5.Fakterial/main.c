#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chislo, resultat=1, n;
    printf("Vvedite chislo >0:\n");
    scanf("%d", &chislo);
    while(chislo<=0)
    {
        printf("Ne verno!\n");
        printf("Vvedite chislo >0:\n");
        scanf("%d", &chislo);
    }
    for(n=chislo; n>=1; n=n-2)
    {
        resultat*=chislo;
    }
    printf("%d!!=%d\n", chislo, resultat);
       return 0;
}
