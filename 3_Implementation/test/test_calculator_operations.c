#include "unity.h"
#include "calculator_operations.h"

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_add_testcase3(void);
void test_add_testcase4(void);
void test_add_testcase5(void);

void test_subtract(void);
void test_subtract_testcase2(void);
void test_subtract_testcase3(void);
void test_subtract_testcase4(void);
void test_subtract_testcase5(void);
void test_subtract_testcase6(void);

void test_multiply(void);
void test_multiply_testcase2(void);
void test_multiply_testcase3(void);
void test_multiply_testcase4(void);
void test_multiply_testcase5(void);
void test_multiply_testcase6(void);

void test_divide(void);
void test_divide_test2(void);
void test_divide_test3(void);
void test_divide_test4(void);
void test_divide_test5(void);

void test_lcm(void);
void test_lcm_case2(void);
void test_lcm_case3(void);
void test_lcm_case4(void);

void test_combination(void);
void test_combination_testcase2(void);
void test_combination_testcase3(void);
void test_combination_testcase4(void);
void test_combination_testcase5(void);
void test_combination_testcase6(void);

void test_permutation(void);
void test_permutation_testcase2(void);
void test_permutation_testcase3(void);
void test_permutation_testcase4(void);
void test_permutation_testcase5(void);
void test_permutation_testcase6(void);

void test_factorial_testcase1(void);
void test_factorial_testcase2(void);
void test_factorial_testcase3(void);
void test_factorial_testcase4(void);
void test_factorial_testcase5(void);

void test_exponential_testcase1(void);
void test_exponential_testcase2(void);
void test_exponential_testcase3(void);
void test_exponential_testcase4(void);
void test_exponential_testcase5(void);

void test_Modulus_testcase1(void);
void test_Modulus_testcase2(void);
void test_Modulus_testcase3(void);
void test_Modulus_testcase4(void);
void test_Modulus_testcase5(void);

void test_Antilog10_testcase1(void);
void test_Antilog10_testcase2(void);
void test_Antilog10_testcase3(void);
void test_Antilog10_testcase4(void);
void test_Antilog10_testcase5(void);

void test_AntilogBase2_testcase1(void);
void test_AntilogBase2_testcase2(void);
void test_AntilogBase2_testcase3(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();


/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_add_testcase3);
  RUN_TEST(test_add_testcase4);
  RUN_TEST(test_add_testcase5);

  RUN_TEST(test_subtract);
  RUN_TEST(test_subtract_testcase2);
  RUN_TEST(test_subtract_testcase3);
  RUN_TEST(test_subtract_testcase4);
  RUN_TEST(test_subtract_testcase5);
  RUN_TEST(test_subtract_testcase6);

  RUN_TEST(test_multiply);

RUN_TEST(test_divide);
RUN_TEST(test_divide_test2);
RUN_TEST(test_divide_test3);
RUN_TEST(test_divide_test4);
RUN_TEST(test_divide_test5);

  RUN_TEST(test_lcm);
  RUN_TEST(test_lcm_case2);
  RUN_TEST(test_lcm_case3);
  RUN_TEST(test_lcm_case4);

  RUN_TEST(test_combination);
  RUN_TEST(test_combination_testcase2);
  RUN_TEST(test_combination_testcase3);
  RUN_TEST(test_combination_testcase4);
  RUN_TEST(test_combination_testcase5);
  RUN_TEST(test_combination_testcase6);

  RUN_TEST(test_permutation);
  RUN_TEST(test_permutation_testcase2);
  RUN_TEST(test_permutation_testcase3);
  RUN_TEST(test_permutation_testcase4);
  RUN_TEST(test_permutation_testcase5);
  RUN_TEST(test_permutation_testcase6);


  RUN_TEST(test_factorial_testcase1);
  RUN_TEST(test_factorial_testcase2);
  RUN_TEST(test_factorial_testcase3);
  RUN_TEST(test_factorial_testcase4);
  RUN_TEST(test_factorial_testcase5);

  RUN_TEST(test_exponential_testcase1);
  RUN_TEST(test_exponential_testcase2);
  RUN_TEST(test_exponential_testcase3);
  RUN_TEST(test_exponential_testcase4);
  RUN_TEST(test_exponential_testcase5);

RUN_TEST(test_Modulus_testcase1);
RUN_TEST(test_Modulus_testcase2);
RUN_TEST(test_Modulus_testcase3);
RUN_TEST(test_Modulus_testcase4);
RUN_TEST(test_Modulus_testcase5);


RUN_TEST(test_Antilog10_testcase1);
RUN_TEST(test_Antilog10_testcase2);
RUN_TEST(test_Antilog10_testcase3);
RUN_TEST(test_Antilog10_testcase4);
RUN_TEST(test_Antilog10_testcase5);

RUN_TEST(test_AntilogBase2_testcase1);
RUN_TEST(test_AntilogBase2_testcase2);
RUN_TEST(test_AntilogBase2_testcase3);


  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20)); 
}
void test_add_testcase2(void) {
  TEST_ASSERT_EQUAL(-10, add(10, -20));

}
void test_add_testcase3(void) {
 
  TEST_ASSERT_EQUAL(-30, add(-10, -20));
}
void test_add_testcase4(void) {
TEST_ASSERT_EQUAL(10, add(-10, 20));
}
void test_add_testcase5(void) {
 TEST_ASSERT_EQUAL(0, add(0, 0));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}
void test_subtract_testcase2(void) {
  TEST_ASSERT_EQUAL(30, subtract(10, -20));

}
void test_subtract_testcase3(void) {
 
  TEST_ASSERT_EQUAL(10, subtract(-10, -20));
}
void test_subtract_testcase4(void) {
TEST_ASSERT_EQUAL(-30, subtract(-10, 20));
}
void test_subtract_testcase5(void) {
 TEST_ASSERT_EQUAL(0, subtract(0, 0));
}
void test_subtract_testcase6(void) {
 TEST_ASSERT_EQUAL(0, subtract(6, 6));
}
void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_multiply_testcase2(void) {
  TEST_ASSERT_EQUAL(0, multiply(0, 0));
}
void test_multiply_testcase3(void) {
  TEST_ASSERT_EQUAL(2, multiply(1, 2));
  TEST_ASSERT_EQUAL(2, multiply(2, 1));
 
}
void test_multiply_testcase4(void) {
  TEST_ASSERT_EQUAL(24, multiply(3, 8));
  TEST_ASSERT_EQUAL(210, multiply(21, 10));
 
}
void test_multiply_testcase5(void) {
  TEST_ASSERT_EQUAL(-12, multiply(6, -2));
}
void test_multiply_testcase6(void) {
   TEST_ASSERT_EQUAL(0, multiply(-1, 0));
}


void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
}
void test_divide_test2(void) {
    TEST_ASSERT_EQUAL(1, divide(50, 50));
}
void test_divide_test3(void) {
   TEST_ASSERT_EQUAL(10, divide(100, 10));
}
void test_divide_test4(void) {
   TEST_ASSERT_EQUAL(-0.5, divide(-1, 2));
}
void test_divide_test5(void) {
  TEST_ASSERT_EQUAL(232, divide(464, 2));
}


void test_lcm(void)
{
  TEST_ASSERT_EQUAL(6, lcm(2, 3));
}
void test_lcm_case2(void)
{
  TEST_ASSERT_EQUAL(-1, lcm(-2, 3));
}
void test_lcm_case3(void)
{
  TEST_ASSERT_EQUAL(-1, lcm(2, -3));
}
void test_lcm_case4(void)
{
  TEST_ASSERT_EQUAL(-1, lcm(0, 3));
}

void test_combination(void)
{
    TEST_ASSERT_EQUAL(35, Combination(7, 3));
}
void test_combination_testcase2(void)
{
    TEST_ASSERT_EQUAL(-1, Combination(3, 7));
}
void test_combination_testcase3(void)
{
    TEST_ASSERT_EQUAL(1, Combination(7, 0));
}
void test_combination_testcase4(void)
{
    TEST_ASSERT_EQUAL(-1, Combination(0, 3));
}
void test_combination_testcase5(void)
{
    TEST_ASSERT_EQUAL(1, Combination(7, 7));
}
void test_combination_testcase6(void)
{
    TEST_ASSERT_EQUAL(-1, Combination(-7, 7));
}


void test_permutation(void)
{
    TEST_ASSERT_EQUAL(60, Permutation(5, 3));
}
void test_permutation_testcase2(void)
{
    TEST_ASSERT_EQUAL(-1, Permutation(-5, 3));
}
void test_permutation_testcase3(void)
{
    TEST_ASSERT_EQUAL(1, Permutation(5, 0));
}
void test_permutation_testcase4(void)
{
    TEST_ASSERT_EQUAL(-1, Permutation(0, 3));
}
void test_permutation_testcase5(void)
{
    TEST_ASSERT_EQUAL(120, Permutation(5, 5));
}
void test_permutation_testcase6(void)
{
    TEST_ASSERT_EQUAL(-1, Permutation(3, 5));
}


void test_factorial_testcase1(void)
{
    TEST_ASSERT_EQUAL(120, Factorial(5));
}

void test_factorial_testcase2(void)
{
    TEST_ASSERT_EQUAL(720, Factorial(6));
}
void test_factorial_testcase3(void)
{
    TEST_ASSERT_EQUAL(1, Factorial(0));
}
void test_factorial_testcase4(void)
{
    TEST_ASSERT_EQUAL(24, Factorial(4));
}
void test_factorial_testcase5(void)
{
    TEST_ASSERT_EQUAL(3628800.0, Factorial(10));
}


void test_exponential_testcase1(void) {
  TEST_ASSERT_EQUAL(8,Exponential(2, 3));
  
  /* Dummy fail */
  //TEST_ASSERT_EQUAL(5,exponential(2,-3));
}
void test_exponential_testcase2(void) {
  TEST_ASSERT_EQUAL(8,Exponential(2, 3));

}
void test_exponential_testcase3(void) {
  TEST_ASSERT_EQUAL(1024,Exponential(4, 5));

}

void test_exponential_testcase4(void) {
  TEST_ASSERT_EQUAL(0.0625,Exponential(4, -2));

}

void test_exponential_testcase5(void) {
  TEST_ASSERT_EQUAL(1,Exponential(1, 0));

}

void test_Modulus_testcase1(void) {
  TEST_ASSERT_EQUAL(2,Modulus(8, 3));

  /* Dummy fail */
 // TEST_ASSERT_EQUAL(1,Modulus(8,3));
}
void test_Modulus_testcase2(void) {
  TEST_ASSERT_EQUAL(2,Modulus(8, 3));
}
void test_Modulus_testcase3(void) {
  TEST_ASSERT_EQUAL(1,Modulus(15, 7));
}
void test_Modulus_testcase4(void) {
  TEST_ASSERT_EQUAL(1,Modulus(0, 10));
}
void test_Modulus_testcase5(void) {
  TEST_ASSERT_EQUAL(0,Modulus(-99, 3));
}



void test_Antilog10_testcase1(void) {
  TEST_ASSERT_EQUAL(10000.000000 ,Antilog10(4));

  /* Dummy fail */
 // TEST_ASSERT_EQUAL(1,Antilog10(8,3));
}
void test_Antilog10_testcase2(void) {
  TEST_ASSERT_EQUAL(100000.000000 ,Antilog10(5));

}
void test_Antilog10_testcase3(void) {
  TEST_ASSERT_EQUAL(10000.000000 ,Antilog10(4));

}
void test_Antilog10_testcase4(void) {
  TEST_ASSERT_EQUAL(0.00001 ,Antilog10(-5));

}
void test_Antilog10_testcase5(void) {
  TEST_ASSERT_EQUAL(0 ,Antilog10(-50));

}


void test_AntilogBase2_testcase1(void) {
  TEST_ASSERT_EQUAL(16 ,AntilogBase2(4));

  /* Dummy fail */
 // TEST_ASSERT_EQUAL(1,Modulus(8,3));
}
void test_AntilogBase2_testcase2(void) {
  TEST_ASSERT_EQUAL(0.0625 ,AntilogBase2(-4));

}
void test_AntilogBase2_testcase3(void) {
  TEST_ASSERT_EQUAL(1 ,AntilogBase2(0));

}
