#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,nCopy,n1,c=2;
    scanf("%d",&n);
    nCopy=n;
    switch (n)
    {
     case 0:
     printf ("Enter n>0");
     main();// мы ужо з вамі размаўлялі на гэтую тэму, і хоць праграма і працуе слушна, але код выглядае проста жахліва, я не залічу гэтую задачу
     break;
     default:
     while (n1>2)
     {
        n1=(nCopy-c);
        n*=n1;
        c+=2;
     }
     break;
    }

    printf ("n!!=%d",n);
    printf("Hello world!\n");
    return 0;
}
