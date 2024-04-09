#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,array[4],max;

    for(i=0;i<4;i++)
    {
        printf("enter the  value of row %d :",i);
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=0;i<4;i++)
    {
        if(max<array[i])
            max=array[i];
    }
    printf(" max is :%d ",max);
    return 0;
}
