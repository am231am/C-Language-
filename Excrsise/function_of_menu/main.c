#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<windows.h>
#define null -23
  void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int cursor=0;
void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
struct emp
{
    int id;
    int age;
    char name[10];

};
struct emp *arr;
void drawmenu(int x);
void add_new_employee(int i);
bool checkId(struct emp arr[], int no_emp, int id);
int no_emp,i,j;
int main()
{

    printf("enter number of employee\n");
    scanf("%d",&no_emp);
    arr=(struct emp*)malloc(no_emp*sizeof(struct emp));
    for(i=0;i<no_emp;i++)
       {
          arr[i].id=-1;
       }
   for(j=0;j<no_emp;j++)
   {
       printf("\nwhat's location to be set the data : ");
       scanf("%d",&i);
       add_new_employee(i);
   }
    return 0;
}
void add_new_employee(int i)
{
   char ch;
   if(arr[i].id==-1)
     {
        for(i=0;i<no_emp;i++)
          {
              bool v=false;
              while(!v)
                 {
                     printf("\nplease enter id \n");
                     scanf("%d",& arr[i].id);
                     v=checkId(arr,i, arr[i].id);
                     if(!v)
                        printf("try agn");
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

}
//check_id_exists
bool checkId(struct emp arr[], int no_emp, int id)
{

    for ( i = 0; i < no_emp; i++)
    {
        if (arr[i].id == id)
        {
            return true;
        }
    }
    return false;
}
