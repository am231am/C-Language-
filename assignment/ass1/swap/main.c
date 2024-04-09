#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb1,numb2,conver;
    printf("enter numb1 :");
    scanf("%d",&numb1);
    printf("enter numb2 :");
    scanf("%d",&numb2);
    conver=numb1;
    numb1=numb2;
    numb2=conver;
    printf("enter numb1 : %d \n",numb1);
    printf("enter numb2 : %d",numb2);

    return 0;
}
