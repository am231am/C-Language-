#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[10];
    int age;
    int salary;
    int over_time;
    int detection;
};
int main()
{
    struct emp arr[3];
    int i,j,full_salary;
    int all_id[3];
    for(i=0;i<3;i++)
    {
        printf("===========data of %d=====\n",i+1);
    scanf("%d",&arr[i].id);
     for(j=0;j<3;j++)
    {
        if( all_id[j]==arr[i].id)
        {
           do{
               printf("id exit enter another one\n");
               scanf("%d",&arr[i].id);
             }while(all_id[j]==arr[i].id);
       }
       all_id[j]=arr[i].id;
    }

     scanf("%s",arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].salary);
    scanf("%d",&arr[i].over_time);
    scanf("%d",&arr[i].detection);
   // all_id[i]=arr[i].id;
    }
    for(i=0;i<3;i++)
    {
        full_salary=arr[i].salary+arr[i].over_time;
         printf("===========data of %d=====\n",i+1);
        printf("id :%d ,name :%s ,age :%d ,full salary :%d\n",arr[i].id,arr[i].name,arr[i].age,full_salary );
    }

    return 0;
}
