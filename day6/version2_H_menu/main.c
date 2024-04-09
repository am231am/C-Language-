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
struct emp *arr;
int no_emp;
void drawmenu(int x);
void display_All(int no_emp);
void gotoxy(int x,int y);
void add_new_employee( int i);
int checkIdsBefore( int id);
void textattr(int i);
int coursor;
int main()
{
    int i ,x;
    coursor=0;
    char ch,flage=0;
    char menue[5][20]={"new","display_all","delete by name","delete by id","exit"};
    printf("enter number of employee\n");
    scanf("%d",&no_emp);
    arr=(struct emp*)malloc(no_emp*sizeof(struct emp));
    for(i=0;i<no_emp;i++)
       {
          arr[i].id=-1;
       }
    printf("enter axis x\n");
    scanf("%d",&x);
 do{
      // draw menue
      drawmenu(x);
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
                                 add_new_employee(i);
                            }
                    else if(strcmp(menue[coursor],menue[1])==0)
                               {
                                   display_All(no_emp);
                                   ch=getch();
                                   system("cls");
                               }

                    else if(strcmp(menue[coursor],menue[2])==0)
                                {
                                    char name[20];
                                    printf("\nwhat's name to be delete :\n ");
                                    scanf("%s",name);
                                    for(i=0;i<no_emp;i++)
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
                                   for(i=0;i<no_emp;i++)
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
free(arr);
}
//add_new_employee
void add_new_employee( int i)
{
   int id;
   char ch;
   if (arr[i].id == -1)
    {
        printf("\nPlease enter an ID: ");
        scanf("%d", &id);
        id=checkIdsBefore(id);
        arr[i].id=id;
        printf("\nPlease enter the age: ");
        scanf("%d", &arr[i].age);

        printf("\nPlease enter the name: ");
        scanf("%s",&arr[i].name);

        printf("\nEmployee added successfully!\n");
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

}
//check_id_exists
int checkIdsBefore(int _id )
{
    int i;
    for (i= 0;i < no_emp; i++)
     {
        if (arr[i].id == _id)
        {
            do
            {
                printf("Please enter a correct ID. This ID is already taken: ");
                scanf("%d",&_id);
             }while(arr[i].id == _id);

        }
     }

    return _id;
}
// draw menue
void drawmenu(int x)
{
    char menu[5][20]={"new","display_all","delete by name","delete by id","exit"};
    int i;
    for(i=0;i<5;i++)
      {
        if(i==coursor)
            textattr(3);
        gotoxy(x,x+i);
        printf("%s",menu[i]);
        textattr(0x07);
      }
}
//display all employee
void display_All(int no_emp)
{
     int i;
     char ch;
     for(i=0;i<no_emp;i++)
        {
            if(arr[i].id!=-1)
                {
                    printf("\nid of %d :%d",i,arr[i].id);
                    printf("\nage of %d :%d",i,arr[i].age);
                    printf("\nname of %d :%s\n",i,arr[i].name);
                }
        }
}
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

