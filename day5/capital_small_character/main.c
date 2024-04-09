#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void upper(char ch);
void lower(char ch);
int main()
{
    char ch;
    printf("enter char:\n");
    ch=getch();

    if(ch>=97&&ch<=122 )
       {
        printf("char %c is lowercase",ch);
        upper(ch);
       }
    else if(ch>=65&&ch<=90)
       {
            printf("char %c is uppercase",ch);
            lower(ch);
       }

    return 0;
}
void upper(char ch)
{
    char up;
    up=ch-32;
    printf("\nthe uppercase is %c",up);
}
void lower(char ch)
{
    char lowercase;
    lowercase=ch+32;
    printf("\nthe uppercase is %c",lowercase);
}
