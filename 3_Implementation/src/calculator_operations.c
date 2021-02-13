#include<calculator_operations.h>
#include<math.h>
int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
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