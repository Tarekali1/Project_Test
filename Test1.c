
#include "Test1.h"
#define NULL (void*)(0)

Error_state Sum_values(int a , int b, int *value)
{

 if(value != NULL)
    {
    *value=a+b;
    return ERROR_OK ;
    }
    else
    {
        return ERROR_NOK ;
    }


}
Error_state Multy(int a , int b , int *value)
{
    if(value != NULL)
    {
    *value=a*b;
    return ERROR_OK ;
    }
    else
    {
        return ERROR_NOK ;
    }


}
