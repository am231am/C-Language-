#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    int age;
    char name[10];
};
int main()
{
    int size,i;
    scanf("%d",&size);
    struct emp * ptr= (struct emp *)malloc(size*sizeof(struct emp));
    for(i=0;i<size;i++)
      {
         printf("enter id\n");
         scanf("%d",ptr->id);
         printf("enter age\n");
         scanf("%d",&ptr[i].age);
         printf("enter name\n");
         scanf("%s",&ptr[i].name);

      }
    for(i=0;i<size;i++)
    {
        printf("id of e1 is %d\nage of e1 is %d\nname of e1 is %s\n",(*ptr).id,ptr[i].age,ptr[i].name);
    }
    return 0;
}
