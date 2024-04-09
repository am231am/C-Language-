#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rows,i;
    printf("enter number of rows\n");
    scanf("%d",&rows);
    int*ptr=(int)malloc(rows*sizeof(int));
    if(ptr!=NULL)
      {
          for(i=0;i<rows;i++)
              {
                  printf("please enter data of %d \n",i+1);
                  scanf("%d",&ptr[i]);
              }
          for(i=0;i<rows;i++)
              {
                  printf("data of row %d is %d \n",i+1,ptr[i]);

              }
         free(ptr);
      }
    else
      {
          printf("no free space");
      }

    return 0;
}
