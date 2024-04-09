#include <stdio.h>
#include <stdlib.h>
#include<string.h>
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
    struct emp e1;
    int total_salary;
    scanf("%d",&e1.id);
    scanf("%s",e1.name);
    scanf("%d",&e1.age);
    scanf("%d",&e1.salary);
    scanf("%d",&e1.over_time);
    scanf("%d",&e1.detection);
    total_salary=(e1.salary+e1.over_time)-e1.detection;
    printf("id:%d ,name: %s ,age: %d ,total salary: %d ",e1.id,e1.name,e1.age,total_salary);

     return 0;
}
