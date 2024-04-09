#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int numb1,numb2;
    float x,y;
    scanf("%d %d %f %f",&numb1,&numb2,&x,&y);
    printf("%d %d\n",numb1+numb2,numb1-numb2);
    printf("%.1f %.1f",x+y,x-y);

    return 0;
}
