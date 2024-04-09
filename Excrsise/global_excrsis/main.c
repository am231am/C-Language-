#include <stdio.h>
#include <stdlib.h>
int g=30;
int main()
{
    int x=7,y=4,i,num,bin[20];
    scanf("%d",&num);

 //   printf("%d:%d:%d:%d:%d\n",x&y,x|y,x^y,x>>1,y<<2);
   // printf("global :%d \n",g);
   do
   {
       printf("not\n");
   }while(num!=5);
   for(i=0;num>0;i++)
   {
       bin[i]=num%2;
       num/=2;
   }
   int j;
   for(j=i-1;j>=0;j--)
   {
     printf("%d",bin[j]);

   }
   //printf(“\007 That was a beep\n”);

   //change value of global
   g=90;
   printf("\nglobal :%d \n",g);
   //local have the same name of global
   int g=40;
   //printf("global :%d \n",(::g));

    return 0;
}
