#include <stdio.h>
#include <stdlib.h>
void icrease_by_value( int a);
void icrease_by_ref(int *a);
char my_toupper(char ch);
int main()
{
    char ch,up;
    printf("enter small character :\n");
    scanf("%c",&ch);
    up = my_toupper(ch);
    printf("upper case of %c is %c \n",ch,up);
    // call by value
    int x=5;
    icrease_by_value(x);
    printf("value of x  %d \n",x);
    //call by address
    printf("\ncall by ref");
    icrease_by_ref(&x);
    printf("value of x %d",x);
    return 0;
}
void icrease_by_value(int a)
{
    a++;
}

void icrease_by_ref(int *a)
{
    (*a)++;
}
char my_toupper(char ch)
{
     int result=ch-32;
     return result;
}
