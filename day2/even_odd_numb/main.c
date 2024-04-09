#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb;
    printf("enter the numb : ");
    scanf("%d",&numb);
    if(numb%2==0)
    {
        printf("number %d is even",numb);
    }
    else
    {
        printf("number %d is odd",numb);
    }
    return 0;
}
