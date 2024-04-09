#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,d,z;
    char car;
    scanf("%c",&car);
    printf("car=%d",car);
   /* int a,d,z;
    scanf("%d %d",&a,&d);
    printf("%d %% %d = %d",a,d, z=a%d); */

    scanf("%f %f",&a,&d);
    printf("%.1f * %.1f = %.1f",a,d, z=a/d);
    printf(" size of int %d \n",sizeof(int));
    printf(" size of float %d \n",sizeof(float));
    printf(" size of double %d \n",sizeof(double));
    printf(" size of char %d \n",sizeof(char));

    return 0;
}
