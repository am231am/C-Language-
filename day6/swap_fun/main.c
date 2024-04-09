#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y);

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    printf("x %d y%d",x,y);
    swap(&x,&y);
    printf("\n after swapping x %d y%d",x,y);
    return 0;
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
