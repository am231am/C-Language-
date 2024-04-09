#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,cols,i,j;
    printf("enter number of rows :\n");
    scanf("%d",&rows);
    printf("enter number of cols :\n");
    scanf("%d",&cols);
    int**arr=(int**)malloc(rows*sizeof(int*));
    for(i=0;i<rows;i++)
        {
            arr[i]=(int)malloc(cols*sizeof(int));
        }
    if(arr!=NULL)
        {
          for(i=0;i<rows;i++)
            for(j=0;j<cols;j++)
              {
                  printf("please enter data of row %d and %d \n",i+1,j+1);
                  scanf("%d",&arr[i][j]);
              }
          for(i=0;i<rows;i++)
            for(j=0;j<cols;j++)
              {
                  printf("data of row %d and col %d is %d \n",i+1,j+1,arr[i][j]);

              }
          for(i=0;i<rows;i++)
              {
                 free(arr[i]);
              }
          free(arr);
       }
    else
      {
          printf("no free space");
      }

    return 0;
}
