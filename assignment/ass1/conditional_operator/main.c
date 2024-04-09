#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numb1,numb2,var;
   scanf("%d",&numb1);
   scanf("%d",&numb2);
   var=(numb1>numb2)?numb1-numb2:numb1+numb2;
   printf("%d",var);

    return 0;
}
