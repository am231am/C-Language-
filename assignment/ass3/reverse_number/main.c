#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem,reverse=0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    printf("the reverse of number is : %d",reverse);
    return 0;
}
