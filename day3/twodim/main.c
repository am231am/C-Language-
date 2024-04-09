#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3];
    int i=0,j=0;
    int sumrow[3],sumcol[3],avg ;
    // enter number
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter row %d col %d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //print array

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
             printf("%d \t", arr[i][j]);
        }
    //sum of each row
      for(i=0;i<3;i++)
      {
          sumrow[i]=0;
      }
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          sumrow[i]+=arr[i][j];
        }
        printf(" \n sum of row %d is : %d",i,sumrow[i]);
    }
    //avarage of each col
     for(i=0;i<3;i++)
      {
          sumcol[i]=0;
      }

      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          sumcol[i]+=arr[i][j];
        }
        avg=sumcol[i]/i;
        printf(" \n avg of col %d is : %d",j,avg);

       }
    return 0;
}
