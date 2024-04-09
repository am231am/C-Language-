#include <stdio.h>
#include <stdlib.h>
struct calculate
{
    int sum;
    int mul;
    int sub;
};
struct calculate calc(int a,int b);


int main()
{
    int a,b;
    printf("please enter two numbers\n");
    scanf("%d%d",&a,&b);
    struct calculate rsulet=calc(a,b);
    printf("sum of%d and %d is %d\n",a,b,rsulet.sum);
    printf("subtraction of%d and %d is %d\n",a,b,rsulet.sub);
    printf("multiplication of%d and %d is %d\n",a,b,rsulet.mul );

    return 0;
}
struct calculate calc(int a,int b)
{
    struct calculate c;
  c.sum=a+b;
   c.sub=a-b;
  c.mul=a*(b);
  return  c;
}
