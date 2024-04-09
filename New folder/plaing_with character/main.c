
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   //Enter your code here. Read input from STDIN. Print output to STDOUT
    char ch;
    char s[24];
    char sen[100];
    scanf("%c\n%s\n%[^\n]s",&ch,s,sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch,s[24],sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%s",sen);
    //gets(sen);
    printf("%c\n%s\n %[^\n]%*c",ch,s,sen);
    return 0;
}*/

