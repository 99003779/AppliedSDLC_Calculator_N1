#include <calculator_operations.h>

float add(float operand1, float operand2)
{
    return operand1 + operand2;
}

float subtract(float operand1, float operand2)
{
    return operand1 - operand2;
}

float multiply(float operand1, float operand2)
{
    return operand1 * operand2;
}

float divide(float operand1, float operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
float LCM(int operand1,int operand2)
{

    int maximum = 0;
    maximum = (operand1 > operand2) ? operand1 : operand2;
    for(int i=0;i<maximum;i++)
    {
       if(maximum % operand1 == 0 && maximum % operand2 == 0) 
       {
           return maximum;
       }
    }
}