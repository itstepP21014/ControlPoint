#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,n2=1;
    scanf("%d",&n);
    a=n;
    if (n<=0){
        printf("Error!");
    }
    if(n%2!=0)
    {
       while(n!=1)
        {
            n=n-2;
            n2*=n;
        }
    printf("%d",n2);
    }
    if(n%2!=1)
    {
       while(n!=2)
        {
            n=n-2;
            n2*=n;
        }
    printf("%d",n2);
    }
    return 0;
}
