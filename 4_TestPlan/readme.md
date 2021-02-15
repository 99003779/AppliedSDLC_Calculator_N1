# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Out of Range check for Arithemic |Max Addition upto 12 digit  | Some value |Overflow Error|Requirement based |
|  H_02       |Check for long number| eg :- 1234567889023 | Some value |Invalid output|Requirement based |
|  H_03       |bracket should be open and close if used|  (2x-3=0|(2x-3=0) |Invalid output|Scenario based |
|  H_04   |    Putting values in valid format| vales to be performed|display valid output|Error if invalid |Scenario based    |
|  H_05       |= sign in the expression  |  2x=3y=10  |valid result|valid result|Boundary based    |
|  H_06 | When n<r for nPr | n=2 r=3 | Error | Error | Scenario |
|  H_07 | When n<r for nCr | n=2 r=3 | Error | Error | Scenario |
|  H_08 | ExponentialF(x) =a(b^x) Where b is positive real no. & b not equal to 1 | x=3 a=2 b=2 | 16 | 16 | Requirement |
|  H_09 | Power fxn F(x)= x^r Where r is greater than equals to 0 | x=2 r=3 | 8 | 8 | requirement |



## Table no: Low level test plan


| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Verify that BODMAS is applied in case of complex queries and the correct result is returned.| 24+3*2 |30 | 30|Requirement based |
|  L_02       |Addition of 2 or more numbers  |  20+30 |50|50|Scenario based    |
|  L_03       |Sequential incorrect parameter  |   2+4*3.y|20|Error|Boundary based    |
|  L_04       |Out of range check   |   addition if exceed 15 digit numbers|any output|Result out of range|Requirement based    |
|  L_05       |Sequential incorrect parameter  |   2+4*3.y|20|Error|Boundary based    |
| L_06   | Two symbol cannot be between numbers        | 3++5      | 2  | Invalid Format|Scenario based |
| L_07   | Trigonometry Sine  value       | sin(x)      | sin x| sin x   |Boundary based 
| L_08   | Trigonometry Cos  value          | cos(x)      | cos x | cos x  |Requirement based
| L_09   | Trigonometry Tan  value      | Tan(x)    | Tan x | tan x |Requirement based
| L_10 | When n greater than or equal to r for nPr | n=3 r=2 | 3 | 3 | Scenario |
| L_11 | When n greater than or equal to r for nCr | n=4 r=2 | 12 | 12 | Scenario |
| L_12 | Base e defined by user for log(a) | e=10 a=10 | 1 | 1 | Scenario |
| L_13 | Base e not defined by user(by default, 10 for log and e for ln) | a=10 e=10 for log a | 1 | 1 | Requirement |
| L_14 | ln x + ln y= ln(xy) where x>0 ; y>0 | x=3y=2 | 1.7916 | 1.7916 | Scenario |
| L_15 | If b other than real positive no. For exp function | x=3 a=2 b=-2 | Error | Error | Boundary |

|Test ID | Description  |Expected Input| Expected Output| Actual output| Type of test
|--|--|--|--|--|--|
| LLR_P_1  |First, the operators within brackets are executed in order of multiplication and subtraction order and then add operator outside bracket.  |14 + (8 – 2 × 3)|16|16|Logical test
|LLR_P_2|The terms inside {} are simplified followed by () and then operated with terms outside the bracket.|1800÷10{(12−6)+(24−12)}|3240|3240|logical
| LLR_P_3|The terms inside () are simplified followed by {}, then [] and then terms are operated with the terms outside the bracket.|1/2[{−2(1+2)}10]|-30|-30|Logical
| LLR_P_4|The terms inside () are simplified first followed by exponent and then terms are operated with the terms outside the bracket.|(2^9*2) + 9 / (e^3)|1204.76983|1204.76983|Logical
LLR_P_5|An equation of the result of more than 8 digits is given by the user.|(10*5+100)*100|Error: Out of range| Error: Out of range| Boundary Based
LLR_P_6|Values up to 9 digits |3+(3*4+5)*3/10+1|Error: Out of range| Error: Out of range| Requirement based
