#include <stdio.h>
#include <stdlib.h>
void  binarynumb(int numb);
int main()
{
  int numb;
  printf("please enter number\n");
  //scanf("%d",&numb);
 // binarynumb(numb);
  //int y=3;
  //int x=1;
char ch;

if (!getch())
{
if (getch())
    printf ("True");
}
  return 0;
}
void  binarynumb(int numb)
{
    int i=0,j,bin[1000];
    while(numb>0)
       {
         bin[i]=numb%2;
         numb/=2;
         i++;
       }
    printf("Binary number:\n");
    for(j=i-1;j>=0;j--)
       {
         printf("%d",bin[j]);
       }

}

/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void my_strcat(char *str1,char *str2);
int main()
{
    int i;
    for(i<5;i=0;i++)
       {
         printf("%d",i);
       }
    int fname[10],lname[10];
    int fullname[20];
    printf(" frist name is: ");
    scanf("%s",fname);
    printf(" second name is: ");
    scanf("%s",lname);
    my_strcpy(fullname,fname);
    strcat(fullname," ");
    my_strcat(fullname,lname);
    printf("full name is : %s ",fullname);

    return 0;
}
void my_strcpy(char *str1,char *str2)
{
   while(*str2!='\0')
    {
      *str1=*str2;
      str1++;
      str2++;
    }
   *str1='\0';
}
void my_strcat(char *str1,char *str2)
{
    int i,j;
    for(i=0;str1[i]!='\0';i++)
        ;
    for(j=0;str2[j]!='\0';j++)
      {
        str1[i]=str2[j];
        i++;
      }
    *(str1+i)='\0';

}
*/
