#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pls enter n!\n");
    int n;
    int rez=1;
    scanf("%d",&n);
    int i=n%2==0?2:1;
    for(; i<=n; i+=2)
    {
        rez*=i ;

    }
    printf("result n!!=%d",rez);



    return 0;
}
