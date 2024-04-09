#include <stdio.h>
#include <stdlib.h>
int g=90;
int add(int x,int y);
struct emp
{
    int id;
}e1;
void printemp(struct emp e);
int main()
{
    int arr[] ;
    struct emp e1={30};
  /*  int g=10;
    {
        int g=30;
    printf("%d",g);

    }*/
    sum(arr,3);
    printemp(e1);
    return 0;
}
void rec()
{

}
int sum(int deg[],int s)
{

}
void printemp(struct emp e)
{
          printf("%d",e.id);
          e.id=201;
}
int add(int x,int y)
{
    int g=40;
    printf("%d",40);
    int r=x+y;
    return r;
}
