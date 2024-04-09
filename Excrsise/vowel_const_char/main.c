#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
bool vowel_char(char ch);

int main()
{
    char ch;
    printf("enter character : ");
    scanf("%c",&ch);
    if(vowel_char(ch))
          printf("char %c is vowel",ch);
    else
        printf("char %c is constant",ch);


    return 0;
}
bool vowel_char(char ch)
{
    if(ch=='A'|| ch=='I'||  ch=='E'|| ch=='O'|| ch=='U' )
        return true;
    else if(ch=='a'|| ch=='i'||  ch=='e'|| ch=='o'|| ch=='u' )
            return true;
    else
        return false;

}
