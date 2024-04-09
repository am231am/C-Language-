#include <stdio.h>
#include <stdlib.h>
struct emp
{
   int id;
   int age;
   char name[10];
}e1;
int main()
{
    int rows,i,j,cols;
    printf("enter number of rows\n");
    scanf("%d",&rows);
    printf("enter number of cols\n");
    scanf("%d",&cols);
    //one dim array dynamic allocation
    int*arr=(int*)malloc(rows*sizeof(int));
    if(arr!=NULL)
        {
            printf("\n one dim array dynamic allocation\n");
            for(i=0;i<rows;i++)
              {
                printf("enter data of row %d \n",i+1);
                scanf("%d",&arr[i]);
              }
            for(i=0;i<rows;i++)
              {
                printf(" data of row %d is : %d\n",i+1,arr[i]);
              }
         free(arr);
        }
    else
        {
           printf("heap not null");
        }
    //Two dim array dynamic allocation
    int**ptr=(int**)malloc(rows*sizeof(int*));
    if(ptr!=NULL)
        {
            printf("\n two dim array dynamic allocation\n");
            for(i=0;i<rows;i++)
              for(j=0;j<cols;j++)
                 {
                   printf("enter data of row %d and col %d \n",i+1,j+1);
                   scanf("%d",&ptr[i][j]);
                 }
            for(i=0;i<rows;i++)
              for(j=0;j<cols;j++)
                 {
                    printf(" data of row %d and col %d is: %d \n",i+1,j+1,ptr[i][j]);
                 }
            for(i=0;i<rows;i++)
                 {
                   free(ptr[i]);
                 }
            free(ptr);
        }
    else
        {
           printf("heap not null");
        }
 // pointer of struct of one employee
   printf("\npointer of struct of one employee\n");
   struct emp *ptp=&e1;
   printf("\nenter id\n");
   scanf("%d",&(ptp->id));
   printf("\nenter age\n");
   scanf("%d",&(ptp->age));
   printf("\nenter name\n");
   scanf("%s",ptp->name);
   printf("id= %d ,age =%d ,name= %s \n",ptp->id,ptp->age,ptp->name);
    return 0;
}
