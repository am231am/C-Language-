#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numb1,numb2,sum,sub,mul;
   scanf("%d %d",&numb1,&numb2);
   sum=numb1+numb2;
   mul=numb1*numb2;
   sub=numb1-numb2;
   printf("%d + %d =%d\n",numb1,numb2,sum);
  printf("%d * %d =%d\n",numb1,numb2,mul);
   printf("%d - %d =%d\n",numb1,numb2,sub);
    return 0;
}
