#include <stdio.h>
#include <stdlib.h>
int fact(int number);
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d",&number);
    printf("factorial of %d is: %d",number,fact(number));
    return 0;
}
int fact(int number)
{
   int fact=1,i;
   for(i=1;i<=number && i>0;i++)
    {
        fact*=i;
    }
   return fact;

}
