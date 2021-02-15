#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_lcm(void);
void test_Combination(void);
void test_Permutation(void);

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
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_factorial);
RUN_TEST(test_lcm);
RUN_TEST(test_Permutation);
RUN_TEST(test_Combination);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, divide(2, 2));
}

void test_factorial(void) {
  TEST_ASSERT_EQUAL(0,factorial(5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4,factorail(555));
}

void test_lcm(void) {
  TEST_ASSERT_EQUAL(75,lcm(5,15));
  TEST_ASSERT_EQUAL(360,lcm(-72,120));
}
  void test_Permutation(void) {
  TEST_ASSERT_EQUAL(6,Permutation(3,2));
  TEST_ASSERT_EQUAL("Error:Out of range",Permutation(180,179));
  
  }

  void test_Combination(void) {
  TEST_ASSERT_EQUAL(15,Combination(6,4));
  TEST_ASSERT_EQUAL("Error: out of range",Combination(180,179));
  }

  void test_exponential(void) {
  TEST_ASSERT_EQUAL(0,exponential(2,3));
  
  /* Dummy fail */
  TEST_ASSERT_EQUAL(5,exponential(2,-3));
}
  void test_cubeRoot(void) {
    TEST_ASSERT_EQUAL(0,cubeRoot(2,2,2));
    
    /* Dummy fail */
    TEST_ASSERT_EQUAL(6,cuberoot(2,2,3));
  }
