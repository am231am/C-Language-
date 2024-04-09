#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define null -23
void gotoxy(int x,int y)
{
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
int coursor;
void drawmenu(int x);
int main()
{
    char menue[3][10]={"new","display","exit"};
    int i ;
    coursor=0;
    char ch,flage=0;

   do{
     // draw menue
    drawmenu(10);
    ch=getch();
    if(ch==-32)
    {
          ch=getch();
         switch(ch)
        {
          case 72:
              coursor--;
              if(coursor<0)
                coursor=2;
            break;
          case 80:
              coursor++;
              if(coursor>2)
                coursor=0;
            break;
          case 71:
              coursor=0;
              break;
          case 79:
              coursor=2;
              break;
          }
    }
    else
    {
        switch(ch)
        {
        case 13:
         system("cls");
          printf("%s",menue[coursor]);
          getch();
          if(coursor==2)
            flage=1;
           break;
        case 27:
            flage=1;

            break;
        }
    }
    }while(flage==0);
    return 0;
}

void drawmenu(int x)
{
    char menu[3][20]={"new","display_all","exit"};
    int i;
    for(i=0;i<3;i++)
      {
        if(i==coursor)
            textattr(3);
        gotoxy(x,x+i);
        printf("%s",menu[i]);
        textattr(0x07);
      }
}
