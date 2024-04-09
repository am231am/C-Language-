#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define null -23
 void gotoxy(int x, int y)
{
    COORD coord={0,0};
    coord.X=x*5;
    coord.Y=y*5;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void draw_Magicbox(int size);
int main()
{
  int size =0,i;
  printf("please enter size : ");
  scanf("%d",&size);
  do{
      printf("please enter  odd size : ");
      scanf("%d",&size);
    }while(size%2==0);
  draw_Magicbox(size);
    return 0;
}
void draw_Magicbox(int size)
{
   int num=(size*size),col=1,row=1 ,i;
        //fill magic box
        for(i=1;i<=num;i++)
          {
             if(i==1)
                {
                   row=1;
                   col=(size+1)/2;
                   gotoxy(col,row);
                   printf("%d",i);
                }
             else
                {
                   if((i-1)%size!=0)
                       {
                          row--;
                          col--;
                          if(row==0)
                              row=size;
                          if(col==0)
                              col=size;
                          gotoxy(col,row);
                          printf("%d",i);
                       }
                   else
                       {
                         if((i-1)%size==0)
                             {
                                row++;
                                gotoxy(col,row);
                                printf("%d",i);
                             }
                      }
                }
         }
}

