#include "calculator_operations.h"
#include<math.h>


float LOG(float operand1)
{
        return log(operand1);
}

 
float Exponential(float operand1,float operand2)
{
    float result,temp;
    result=pow(operand1,operand2);
    for(int i=1;i<=operand2;i++)
    {
        temp=temp*operand1/i;
        result=result+temp;
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

double pi = 3.14159265359;

//Abhishek'S Function defination Starts

double findSquareroot(double operand1) // for finding square roots

{

return sqrt(operand1);

}

double findcubeRoot(double operand1)

{   // calculate the cube root

double cubeRoot = pow(operand1, 1.0/3); // store and will be used for Returning  the cuberoot

return cubeRoot;

}


double Sine_for_degree(double operand1)

{

double Sine_Value1 = sin(pi/180*operand1); //will calculate values for angle's in degree

// Return the final answer

return Sine_Value1;

}



double Cosine_for_degree(double operand1)

{

double Cosine_Value1 = cos(3.14/180*operand1); //will calculate values for angle's in degree

// Return the final answer

return Cosine_Value1;

}



double Tan_for_degree(double operand1)

{

double Tan_Value1 = tan(pi/180*operand1); //will calculate values for angle's in degree

// Return the final answer

return Tan_Value1;

}

