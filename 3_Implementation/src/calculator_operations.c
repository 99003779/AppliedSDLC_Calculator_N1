<<<<<<< HEAD
#include<calculator_operations.h>
#include<math.h>
int add(int operand1, int operand2)
=======
#include <calculator_operations.h>

float add(float operand1, float operand2)
>>>>>>> 85e0f0b7752ca5156dc9d2117977fa9b9838c92b
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
<<<<<<< HEAD
int GCD(int operand1, int operand2)
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

float ANTILOG(float operand1)
{

}

float SINE(float operand1)
{
 float ret, val;


   val = 3.141592/ 180;
   ret = sin(operand1*val);
  
   
   return(ret);
       
}


float COS(float operand1)
{
 float ret, val;


   val = 3.141592/ 180;
   ret = cos(operand1*val);
  
   
   return(ret);
       
}


float TAN(float operand1)
{
 float ret, val;


   val = 3.141592/ 180;
   ret = tan(operand1*val);
  
   
   return(ret);
       
}

float power(float operand1, float operand2)
{
    return(pow(float operand1, float operand2));
}
=======
// LCM 
float LCM(int operand1,int operand2)
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
// power
float power(float operand1,float operand2)
{
    return pow(operand1,operand2);
}
//combination
float combination(float operand1,float operand2)
{
    return factorial_calc(operand1) / factorial_calc(operand1-operand2)*factorial_calc(operand2);
}
//permutation
float permutation(float operand1,float operand2)
{
    return factorial_calc(operand1) / factorial(operand1-operand2);
}
>>>>>>> 85e0f0b7752ca5156dc9d2117977fa9b9838c92b
