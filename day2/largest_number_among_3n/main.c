#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb1,numb2,numb3;
    printf("Enter number one : ");
    scanf("%d",&numb1);
    printf("Enter number two : ");
    scanf("%d",&numb2);
    printf("Enter number three : ");
    scanf("%d",&numb3);
    if (numb1>numb2&&numb1>numb3)
        printf("largest number  is : %d",numb1);
    else if(numb2>numb1&&numb2>numb3)
        printf("largest number is : %d",numb2);
    else
        printf("largest number is :%d ",numb3);

    return 0;
}
