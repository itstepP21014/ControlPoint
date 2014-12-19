#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int begin,end,c,n=1,m,h,k;
    //Enter with space
    scanf ("%d ",&begin);
    scanf ("%d",&end);
    c=end-begin;
    if (c==1)
    {
        printf ("(%d,%d)",begin,end);
    }
    else
    {
      while (n)
    {
      k=c;
      while (k!=0)
      {
      m=begin;
      h=m+1;
      while (h<=end)
      {
       printf ("(%d,%d)\n",m,h);
       h=h+1;
      }
      k-=1;
      if (k==0)
      {
          n=0;
      }
      begin+=1;
      }
    }
    }

    printf("Hello world!\n");
    return 0;
}
