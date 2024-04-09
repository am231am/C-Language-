#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y;
   int div,mod;
   scanf(" %d",&x);
   scanf("%d",&y);
   div=x/y;
   mod=x%y;
   printf("%d / %d = %d \n",x,y,div);
   printf("%d  %d = %d \n",x,y,mod);
    return 0;
}
