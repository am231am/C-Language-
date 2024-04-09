#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,array[4],min;
    min=array[0];
    for(i=0;i<4;i++)
    {
        printf("enter the  value of row %d :",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<4;i++)
    {
        if(min>array[i])
            min=array[i];
    }
    printf(" min is :%d ",min);
    return 0;
}
