#include <stdio.h>
#include <stdlib.h>
int power(int a,int b);

int main()
{
    int basis,exponent,s;
    printf("please enter the basis \n");
    scanf("%d",&basis);
    printf("please enter the exponent \n");
    scanf("%d",&exponent);
    printf("power of basis %d to exp %d is :  %d",basis,exponent,power(basis,exponent));

    return 0;
}
int power(int basis,int exponent)
{
     int pow=1,i;
     for(i=1;i<=exponent;i++)
        pow*=basis;
    /* while(i<=b)
     {
         pow*=a;
         i++;
     }
     */
    return pow;

}
