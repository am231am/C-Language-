#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 5
struct emp
{
    int id;
    int age;
    char name[10];
}e1,e2;
int main()
{
    int i;
    e1.id=123;
    e1.age=22;
    strcpy(e1.name,"amina");
    e1.name[2]='e';
    //wrong e1.name=e2.name
    strcpy(e2.name,e1.name);
    printf("\n%d:%d:%s\n",e1.id,e1.age,e2.name);
    //array which data type is struct emp
    struct emp arr[size];
    // arr.id compilation error arr is the address of array
    for(i=0;i<size;i++)
        {
            printf("enter id of %d \n",i+1);
            scanf("%d",&arr[i].id);

        }
    arr[2].id=32;
    for(i=0;i<size;i++)
        {
            printf(" id of %d is %d \n",i+1,arr[i].id);
        }

    printf("\n%d:%d:%s\n",e1.id,e1.age,e2.name);

    return 0;
}
