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

// float factorial_calc(float operand1)
// {
//   if (operand1 == 0) // Base case
//     return 1;
//   else
//     return operand1*factorial_calc(operand1-1);
// }
float Combination(float operand1,float operand2)
{
  float n = factorial(operand1);
  float m = factorial(operand1-operand2);
  float ans = n/m;
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

float exponential(float operand1,float operand2,float result)
{
    //if(operand1!=0 && operand2!=0)
    for(int i=operand1-1;i>0;i--)
    {
        result=1+operand2*result/i;
    }
    return result;
    //return(operand2*operand1(operand1,operand1-1));
}

float cubeRoot(float operand1)
{
    float user_input,precission=0.01;
    //     for integer part
    for(user_input=1;(user_input*user_input*user_input)<=n;user_input++);
    // for fractional part
    for(--user_input;(user_input*user_input*user_input)<n;user_input=user_input+precision);
    return user_input;
}
