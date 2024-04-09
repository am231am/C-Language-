#include <stdio.h>
#include <stdlib.h>

int main()
{
    //methode one
    int n,sum=0;
    printf("please enter numbers:\n");
    do
    {
        scanf("%d",&n);
        sum+=n;

    }while(sum<100);
    printf("sum is = %d",sum);

    return 0;
}
