#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4]={0};
    int i ,sum=0;


    min=arr[0];
    for(i=0;i<4;i++)
    {
        printf("enter the  value of row %d :",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<4;i++)
    {
        printf("%d \t",arr[i]);
    }

    for(i=0;i<4;i++)
    {
        sum+=arr[i];
    }
    printf("\nsum is %d",sum);






    return 0;
}
