#include <stdio.h>
#include <stdlib.h>
int max(int a,int b);
int max_numbers(int a,int b,int c,int d);
int main()
{
   int a,b,c,d,year,s;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    s=max_numbers(a,b,c,d);
    printf("%d\n",s);
    printf("=====================================================");

    return 0;
}
int max(int a,int b)
{
    int max;
    max=a;
    if(max<b)
        max=b;
    else
        max=a;

    return max;
}
int max_numbers(int a,int b,int c,int d)
{
    int maxnumb,maxnumb2,maxall;
   maxnumb=max(a,b);
   maxnumb2=max(c,d);
   maxall=max(maxnumb,maxnumb2);
    return  maxall;

}
