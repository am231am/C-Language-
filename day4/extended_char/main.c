#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf(" please enter char :");
    ch=getch();
    if(ch==-32)
    {
        ch=getch();
     printf(" char %c  is extended and ASCII is %d",ch,ch);
    }
    else
    {
        printf(" char %c  is normal and ASCII is %d",ch,ch);
    }
    return 0;
}
