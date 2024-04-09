#include <stdio.h>
#include <stdlib.h>
#define Rows 3
#define cols 2

int main()
{

    int arr[Rows][cols],i,j,sum=0,avg;
    //initialization with zero
    for(i=0;i<Rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            arr[i][j]=0;
        }
    }
    //print array
    for(i=0;i<Rows;i++)
    {
        for(j=0;j<cols;j++)
        {
           printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
//scan data from user
  for(i=0;i<Rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("data of row %d and col %d\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
//print array
    for(i=0;i<Rows;i++)
    {
        for(j=0;j<cols;j++)
        {
           printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    //sum of rows
    for(i=0;i<Rows;i++)
    {
        for(j=0;j<cols;j++)
        {
          sum+=arr[i][j];
        }
        printf("\n");
        printf("sum of row %d is : %d",i+1,sum);
         sum=0;
    }
//average of each col
        for(j=0;j<cols;j++)
    {
          for(i=0;i<Rows;i++)

        {
          sum+=arr[i][j] ;
        }
        avg=sum/Rows;
        printf("\naverage of col %d is : %d",j+1,avg);
        sum=0;
        printf("\n");
    }
    return 0;
}
