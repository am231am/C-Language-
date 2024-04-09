#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int is_prim(int n);
int main()
{
    int n,i;
    printf("please enter number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(is_prim(i))
            printf("%d  ",i);

    }

    return 0;
}
int is_prim(int n)
{
    int i,flage=0;
    for(i=2;i<=n/2;i++)
    {
       if(n%2==0)
       {
            flage=1;
            break;
       }
    }
        if(flage==0&&n!=1)
            return 1;
        else
            return 0;
}
