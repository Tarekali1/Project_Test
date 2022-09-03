#include <stdio.h>
#include <stdlib.h>
#include "Test1.h"
int main()
{
    int x = 10 ;
    int y = 20 ;
    int sum = 0 ;
    int multi = 0 ;
    int *p =NULL ;
    if(Sum_values(x,y,&sum)==ERROR_OK)
    {

    printf("sum of %d & %d = %d  \n",x,y,sum);
    }
    else
    {
        printf("Invalid Address \n");
    }
    if(Multy(x,y,&multi)==ERROR_OK) //if we replace &multi = 0 it will get to else
    {

     printf("multy of %d & %d = %d  \n",x,y,multi);
    }
   else
    {
        printf("Invalid Address \n");
    }
    return 0;

}
