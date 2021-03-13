/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__
//#include "calculator_operations.h"
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
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

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand3 
* @param[in] operand4 
* @return Result of operand1 * operand2
*/
float tempconv(float operand1);
//float Exponential(float operand1, float operand2);
float Modulus(int operand1, int operand2);
float Antilog10(double operand1);
float AntilogBase2(double operand1);


//Abhishek'S Function declaration Starts

//Root function declaration

double findSquareroot(double operand1);

double findcubeRoot(double operand1);

//Logarithmic Function Declaration

//double LOG(float operand1);

//Trigonometric fFunction Declaration

double Sine_for_degree(double operand1);

double Sine_for_radian(double operand1);

double Cosine_for_degree(double operand1);

double Cosine_for_radian(double operand1);

double Tan_for_degree(double operand1);

double Tan_for_radian(double operand1);

double Cosec_for_degree(double operand1);

double Cosec_for_radian(double operand1);

double Sec_for_degree(double operand1);

double Sec_for_radian(double operand1);

double Cot_for_degree(double operand1);

double Cot_for_radian(double operand1);

//Abhishek'S Function declaration end

float power(float operand1, float operand2);
/**
* finds the power of operand1 and operand2 and returns the result 
* @param[in] operand3 
* @param[in] operand4 
* @return float value of the power of operand 1 and operand 2
*/
double degreetorad(double operand1);
/**
 * convert  degree to radian of operand 1 and returns the result
 * @param[in] operand1
 * @return radian
 * 
 
 */
float tempconv(float operand1);
/**
 * conversion in Temperature unit of operand 1 and returns the result
 * @param[in] operand1
 * @return  converted temperture
 
 */

float Factorial(float operand1);
int gcd(int operand1, int operand2);
float lcm(int operand1, int operand2);
float Combination(float operand1, float operand2);
float Permutation(float operand1, float operand2);
float Factorial(float operand1);
float LOG(float operand1);
float Exponential(float operand1, float operand2);
#endif
