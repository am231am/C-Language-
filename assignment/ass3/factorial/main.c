#include <stdio.h>
#include <stdlib.h>

int main()
{

   int num,fact,i;
   fact=1;
   printf("please enter number ");
   scanf("%d",&num);
   if (num<0)
     printf("number is negative and there is no fact");
   else
   {
       //method one
   i=num;
   while(num>=1)
   {
       fact*=num;
        num--;
   }
   printf("the factorial of %d is: %d",i,fact);

   //-----------------------------------------------------
   //methode two
  /* for(i=1;i<=num;i++)
   {
       fact*=i;

   }
   printf("the fact of %d is : %d",num,fact);

    */
    }
    return 0;
}
