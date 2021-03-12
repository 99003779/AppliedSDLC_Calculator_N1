#include "calculator_operations.h"
#include<math.h>

float Exponential(float operand1,float operand2)
{
    float result,t;
    result=pow(operand1,operand2);
    for(int i=1;i<=operand2;i++)
    {
        t=t*operand1/i;
        result=result+t;
    }
    
    return result;

}
/* for modulus operation */
float Modulus(int operand1,int operand2)
{
    float result1=0;
    if(operand1==0)
    {
        return 1;
    }
    else
    {
        result1= operand1 % operand2;
        return result1;
    }
}

/*for  factorial operation*/
float Factorial(float operand1)
{
    if (operand1 == 0)
    return 1;
    else 
    return (operand1==1 || operand1==0)? 1:operand1*Factorial(operand1-1);

}
// ******program to calculate antilog of base10  of operand1 *******

float Antilog10(double operand1)
{   
   double antilogresult=pow(10,operand1);
    return antilogresult;
}
// ******program to calculate antilog of base2  of operand1 *******
float AntilogBase2(double operand1)
{   
   double antilogbase2=pow(2,operand1);
    return antilogbase2;
}
