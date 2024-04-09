#include <stdio.h>

int main()

{

    int i, numb, flage = 0;
    printf("Enter any numb to Check for Prime: ");

    scanf("%d", &numb);
    for (i = 2; i <= numb / 2; i++)
    {
        if(numb%i==0)
            flage=1;
    }

    if(flage==0&&numb!=1)
        printf("number is prime");

    else
        printf("number not prime");

    return 0;
}

