#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,r=0,rem;
    scanf("%d", &n);
    int sum=0;
    while(n<=99999&&n>=10000)
     {

           if(n>0)
            {
                for(i=0;i<5;i++)
                {
                  rem=n%10;
                  r=rem;
                  sum+=r;
                  n/=10;
                }
            }
     }
     printf("%d",sum);

    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}    /*int a, b,i;
    scanf("%d\n%d", &a, &b);
    char arr[11][10]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    for(i=a;i<=b;i++)
      {
        if(i<=9)
           printf("%s\n",arr[i-1]);
        else if (i>9)
         {
            if (i%2==0)
              printf("%s\n",arr[9]);
            else
              printf("%s\n",arr[10]);
         }
      }

  	// Complete the code.

    return 0;

}*/

/* //hacker rank hello world
    char hello[100];
    int r;
   // gets(hello);
    scanf("%[^\n]%*c", hello);
    printf("Hello, World!\n");
    printf("%s",hello);

    return 0;
}
*/
