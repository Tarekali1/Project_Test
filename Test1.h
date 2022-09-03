#ifndef TEST1_H_INCLUDED
#define TEST1_H_INCLUDED

typedef enum
{
    ERROR_OK,
    ERROR_NOK
}Error_state;

Error_state Sum_values(int a , int b ,int *value);
Error_state Multy(int a , int b , int *value);
#endif // TEST1_H_INCLUDED
