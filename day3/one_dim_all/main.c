#include <stdio.h>
#include <stdlib.h>

int main()
{
//initialize array by 0
      int arr[4]={0},i;
      //get data from user
     for(i=0;i<4;i++)
     {
         printf("enter number %d\n",i+1);
         scanf("%d",&arr[i]);

     }
     //print data method one
     for(i=0;i<4;i++)
     {
         printf("element number %d is :%d\n",i+1,arr[i]);

     }
    //print data method two
      for(i=0;i<4;i++)
     {
         printf("%d\n",arr[i]);

     }
     //sum of array
     int sum=0;
     for(i=0;i<4;i++)
     {
        sum+=arr[i];
     }
printf("sum of array is: %d",sum);
//maximum and minimum value
int max=arr[0],min=arr[0];
for(i=0;i<4;i++)
{
    if(max<arr[i])
        max=arr[i];
    if(min>arr[i])
        min=arr[i];
}
printf("\nmax of array is :%d",max);
printf("\nmin of array is :%d",min);

//search the value in array
int flag=0,n,count=0;
printf("\n enter the target:\n");
scanf("%d",&n);
for(i=0;i<4;i++)
     {
        if(n==arr[i])
        {
            printf("target found in index %d\n",i);
            flag=1;
            count+=1;
         }
    }
if(flag==0)
     printf("target not found");
else
    printf("target found %d times",count);
//extra by me
//printf("target found %d times",count);
    return 0;
}
