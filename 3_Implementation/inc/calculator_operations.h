/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
float add(float operand1, float operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
float subtract(float operand1, float operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
float multiply(float operand1, float operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
float divide(float operand1, float operand2);
<<<<<<< HEAD

int GCD(int operand1, int operand2);

float SINE(float operand1);
float COS(float operand1);
float TAN(float operand1);
float power(float operand1, float operand2);

float antilog(float operand1, float operand2);

float log(float operand1);

=======
>>>>>>> 85e0f0b7752ca5156dc9d2117977fa9b9838c92b

/**
* finds the LCM of operand1 and operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the LCM of operand 1 and operand 2

*/
float LCM(int operand1, int operand2);
/**
* finds the power of operand1 and operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return float value of the power of operand 1 and operand 2

*/
float power(float operand1, float operand2);

/**
* finds the Combination of operand1 and operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return float value of the Combination of operand 1 and operand 2

*/
float combination(float operand1, float operand2);

/**
* finds the permutation of operand1 and operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return float value of the Combination of operand 1 and operand 2

*/
float permutation(float operand1, float operand2);
#endif  /* #define __CALCULATOR_OPERATIONS_H__ */