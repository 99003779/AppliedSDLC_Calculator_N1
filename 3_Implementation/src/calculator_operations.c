#include"calculator_operations.h"
#include<math.h>
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



float lcm(int operand1,int operand2)
{

    int maximum = 0;
int i=0;
if(operand1 <=0 || operand2 <=0)
{
    return -1;
}
else
{
    maximum = ((operand1 > operand2) ? operand1 : operand2);
    
    //for (i=0;i<maximum;i++)
    while(1)
    {
        if (maximum % operand1 == 0 && maximum % operand2 == 0)
        {
             return maximum;
        }
        maximum++;
    }
}
}


float Combination(float operand1,float operand2)
{
    if(operand1<operand2)
    {
        return -1;
    }
    else if(operand1==0)
    {
        return -1;
    }
    else if(operand1<0 || operand2 <0)
    {
        return -1;
    }
    else{
  float op_2 = Factorial(operand1);
  float op_1 = Factorial(operand1-operand2)* Factorial(operand2);
  float ans =op_2/op_1;
    return ans;
}
}
float Permutation(float operand1,float operand2)
{
    if(operand1<operand2)
    {
        return -1;
    }
    else if(operand1<=0 || operand2 <0)
    {
        return -1;
    }
    else 
    {
    return Factorial(operand1) / Factorial(operand1-operand2);
    }
}

float power(float operand1, float operand2)
{
    return pow(operand1, operand2);
}
double degreetorad(double operand1)
{
    double pi = 3.14159265359;
    return (operand1 * pi / 180);
}
float tempconv(float operand1)
{
     return ((operand1 * 9/5)+ 32);
     //return( (conv_inp*9/5)+32);
}