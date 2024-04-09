#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define null -23
struct emp
{
    int id;
    int age;
    char name[10];

};
//int isIdRepeated(struct emp arr[], int index);
void gotoxy(int x,int y);
void textattr(int i);
int main()
{
    int i ,coursor=0,x;
    char ch,flage=0;
    char menue[5][20]={"new","display","delete by name","delete by id","exit"};
    struct emp arr[10];
    for(i=0;i<10;i++)
       {
          arr[i].id=-1;
       }
    scanf("%d",&x);
do{
     // draw menue
     for(i=0;i<5;i++)
          {
             if(i==coursor)
                textattr(3);
             gotoxy(x,x+i);
             printf("%s",menue[i]);
             textattr(0x07);
          }

   //extended key up,down,home,end


     ch=getch();
     if(ch==-32)
        {
            ch=getch();
           switch(ch)
            {
              case 72:
                 coursor--;
                 if(coursor<0)
                    coursor=4;
                 break;
              case 80:
                 coursor++;
                 if(coursor>4)
                    coursor=0;
                  break;
              case 71:
                  coursor=0;
                  break;
              case 79:
                  coursor=4;
                  break;
          }
         }
    //normal key esc,enter
    else
    {
        switch(ch)
              {
               case 13:
                   system("cls");
                    printf("%s",menue[coursor]);
                     if(strcmp(menue[coursor],menue[0])==0)
                                 {
                                      printf("\nwhat's location to be set the data : ");
                                      scanf("%d",&i);
                                      if(arr[i].id==-1)
                                              {
                                                    printf("\nplease enter id \n");
                                                    int id;
                                                    scanf("%d",&arr[i].id);
                                                    id=arr[i].id;
                                                    printf("id %d",id);
                                                    for(i=0;i<10;i++)
                                                        {
                                                            while(arr[i].id==id)
                                                                  {
                                                                     printf("id exit enter another one\n");
                                                                     scanf("%d",&arr[i].id);
                                                                  }
                                                        }
                                                    printf("\nplease enter age \n");
                                                    scanf("%d",&arr[i].age);
                                                    printf("\nplease enter name \n");
                                                    scanf("%s",arr[i].name);
                                                    system("cls");
                                                }
                                       else
                                                {
                                                    printf("The location is not null. Do you want to override? (Y/N): ");
                                                    getchar();
                                                    ch = getchar();
                                                    if (ch == 'Y' || ch == 'y')
                                                             {
                                                                 arr[i].id = -1;
                                                                  printf("\nplease enter id \n");
                                                                  scanf("%d",&arr[i].id);
                                                                  printf("\nplease enter age \n");
                                                                  scanf("%d",&arr[i].age);
                                                                  printf("\nplease enter name \n");
                                                                  scanf("%s",arr[i].name);
                                                                 system("cls");
                                                             }
                                                }
                     }else if(strcmp(menue[coursor],menue[1])==0)
                               {
                                    for(i=0;i<10;i++)
                                             {
                                                 if(arr[i].id!=-1)
                                                    {
                                                         printf("\nid of %d :%d",i,arr[i].id);
                                                         printf("\nage of %d :%d",i,arr[i].age);
                                                         printf("\nname of %d :%s\n",i,arr[i].name);

                                                    }
                                            }

                                      ch=getch();
                                      system("cls");

                                }

                    else if(strcmp(menue[coursor],menue[2])==0)
                                {
                                    char name[20];
                                    printf("\nwhat's name to be delete :\n ");
                                    scanf("%s",name);
                                    for(i=0;i<10;i++)
                                          {
                                                if(strcmp(arr[i].name,name)==0)
                                                    {
                                                        arr[i].id=-1;
                                                        printf("name is deleted");
                                                    }
                                          }
                                    system("cls");

                                }
                    else if(strcmp(menue[coursor],menue[3])==0)
                            {
                                   int id;
                                   printf("what's id to be delete  :\n");
                                   scanf("%d",&id);
                                   for(i=0;i<10;i++)
                                       {
                                          if(arr[i].id==id)
                                               arr[i].id=-1;
                                       }
                                   system("cls");
                            }
                    if(coursor==4)
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
/*int isIdRepeated(struct emp arr[], int index)
{
    int i;
    for(i = 0; i <index; i++)
        {
             if(arr[i].id == arr[index].id)

                      return 1;
              else
                      return 0;
        }

}*/
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

