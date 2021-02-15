#include "calculator_operations.h"

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
int gcd(int operand1, int operand2)
{
   int i, GCD;

  
    for(i = 1; i <= operand1 && i <= operand2; i++)
    {
        if(operand1 % i == 0 && operand2 % i == 0)
            GCD = i;
    }

     
    return  GCD;
}

float LOG(float operand1)
{
 
        return log(operand1);
}



float lcm(int operand1,int operand2)
{
    int maximum = 0;
    maximum = ((operand1 > operand2) ? operand1 : operand2);
    for (int i=0;i<maximum;i++)
    {
        if (maximum % operand1 == 0 && maximum % operand2 == 0)
        {
             return maximum;
        }
    }
}


float Combination(float operand1,float operand2)
{
  float op_2 = factorial(operand1);
  float op_1 = factorial(operand1-operand2);
  float ans =op_2/op_1;
    return ans;
}
float Permutation(float operand1,float operand2)
{
    return factorial(operand1) / factorial(operand1-operand2);
}

float factorial(float operand1)
{
    if (operand1 == 0)
    return 1;
    else 
    return (operand1==1 || operand1==0)? 1:operand1*factorial(operand1-1);

}

float Exponential(float operand1,float operand2,float result)
{
    //if(operand1!=0 && operand2!=0)
    for(int i=operand1-1;i>0;i--)
    {
        result=1+operand2*result/i;
    }
    return result;
    //return(operand2*operand1(operand1,operand1-1));
}

float cubeRoot(float operand1,float operand2,float operand3)
{
    return operand1 * operand2 * operand3;
}
float lengthconv(float operand1)
{
    float cm, meter, km;

    /* Input length in centimeter from user */
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    /* Convert centimeter into meter and kilometer */
    meter = cm / 100.0;
    km    = cm / 100000.0;

    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km", km);
}


float tempconv(float operand1,float operand2);
{
    printf("Enter the temperature in Celcius: ");

    scanf("%f",operand1);

    f = c * 9/5 + 32;

    printf("Temperature in Farenheit: %f",operand2);
}

float deg,rad;
{
    printf("Enter the degree= ");
    scanf("%f",degree);

    //convert degree to rad
    rad=(3.14/180)*deg;

    printf("deg %f in rad is %f\n, deg,rad);
           
}
