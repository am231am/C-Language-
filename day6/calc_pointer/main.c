#include <stdio.h>

struct calculate
{
    int sum;
    int mul;
    int sub;
};

struct calculate calc(int* a, int* b);

int main()
{
    int a, b;
    printf("please enter two numbers\n");
    scanf("%d%d", &a, &b);

    struct calculate result = calc(&a, &b);

    printf("Sum of %d and %d  = %d\n",a,b, result.sum);
    printf("Product %d and %d  = %d\n",a,b, result.mul);
    printf("Difference %d and %d  = %d\n",a,b,result.sub);

    return 0;
}

struct calculate calc(int* a, int* b)
{
    struct calculate c;
    c.sum = (*a) + (*b);
    c.mul = (*a) * (*b);
    c.sub = (*a) - (*b);
    return c;
}
