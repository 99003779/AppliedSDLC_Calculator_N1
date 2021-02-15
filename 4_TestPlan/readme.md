# TEST PLAN:

## Table no: High level test plan

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





## Table No 1.: Low level test plan

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

## Table No 2.: Low level test plan
|Test ID | Description  |Expected Input| Expected Output| Actual output| Type of test
|--|--|--|--|--|--|
| LLR_P_1  |First, the operators within brackets are executed in order of multiplication and subtraction order and then add operator outside bracket.  |14 + (8 – 2 × 3)|16|16|Logical test
|LLR_P_2|The terms inside {} are simplified followed by () and then operated with terms outside the bracket.|1800÷10{(12−6)+(24−12)}|3240|3240|logical
| LLR_P_3|The terms inside () are simplified followed by {}, then [] and then terms are operated with the terms outside the bracket.|1/2[{−2(1+2)}10]|-30|-30|Logical
| LLR_P_4|The terms inside () are simplified first followed by exponent and then terms are operated with the terms outside the bracket.|(2^9*2) + 9 / (e^3)|1204.76983|1204.76983|Logical
LLR_P_5|An equation of the result of more than 8 digits is given by the user.|(10*5+100)*100|Error: Out of range| Error: Out of range| Boundary Based
LLR_P_6|Values up to 9 digits |3+(3*4+5)*3/10+1|Error: Out of range| Error: Out of range| Requirement based

## Table No 3.: Low level test plan
| Test ID | Description | expected Input | Expected output | Actual output| Type of test
|--|--|--|--|--|--|
| LLR\_P\_1 | Finding the square of given number i.e. find power of number will be 2.|100^2 |10000 |10000|logic based
| LLR\_P\_2 | Finding the cube of given number i.e. find power of number will be 3. | 10^3 | 1000 |1000|logic based
| LLR\_P\_3 | Finding the power of given number i.e. find power of number will be any number | 2^5 | 32 | 32|logic based
| LLR\_P\_4 | Finding the power of big number i.e. find power of number which results in digits more than 20|3^20 |3.48x10^9 |3.48x10^9 | Boundary based
| LLR\_P\_5 | Finding the power of other then the numbers i.e. finding power of any operator or any other buttons |[^20Or +^60 | Error: Out of range |  Error: Out of range | Requirement based
 
## Table No 4.: Low level test plan 
| Test ID | Description | expected Input | Expected output | Actual output| Type of test
|--|--|--|--|--|--|
| LLR\_P\_1 |finding LCM of two positive numbers|5,15 |75|75|logic based
| LLR\_P\_2 |finding LCM of any one negative number| -72,120 | 360 |360|logic based
| LLR\_P\_3 | finding LCM of one number as zero | 0,10| Error | Error |logic based
| LLR\_P\_4 |finding LCM of two large numbers|100000,100000|Out of range| Out of range| Boundary based

## Table No 5.: Low level test plan
| Test ID | Description | expected Input | Expected output | Actual output| Type of test case
|--|--|--|--|--|--|
| LLR\_P\_1 |find permutation using the formula|3,2 |6|6|logic based
| LLR\_P\_2 |finding permutations of large numbers| 180,179 | Error: large result| Error: large Result |Boundary based
| LLR\_P\_3 | Permutation of numbers when n<r | 10,11| Error | Error |requirement based
| LLR\_P\_4 |find combination using the formula|6,4|15|15|logic based
| LLR\_P\_5 |finding combination of large numbers| 180,179 | Error: large result| Error: large Result |Boundary based
| LLR\_P\_6 | Combination of numbers when n<r | 4,6| Error | Error |requirement based

## Table No 6.: Low level test plan
| Test ID | Description | expected Input | Expected output | Actual output| Type of test case
|--|--|--|--|--|--|
| LLR\_P\_1 | Trigonometric Sine  value  of 0    | 0   | 0 | 0  |math.h file & Boundary based 
| LLR\_P\_2 |Trigonometric Cosine  value  of 0    | 0   | 1 | 1  |math.h file & Boundary based 
| LLR\_P\_3 | Trigonometrc Tan  value  of 0    | 0   | 0 | 0  |math.h file & Boundary based 
| LLR\_P\_4 |Trigonometric Sine  value  of 90   | 90   | 1 | 1  |math.h file & Boundary based 
| LLR\_P\_5 |Trigonometric Cosine  value  of 90   | 90   | 0 | 0  |math.h file & Boundary based 
| LLR\_P\_6 | Trigonometric Tan  value  of 90   |  90 | not defined | not defineed  |math.h file & Boundary based 
| LLR\_P\_6 | other then numeric values in trigonometric ratios  | /,=,*,&,*;,', | errror | error |math.h file & Boundary based 


## Table No 7.: Low level test plan
| Test ID | Description | expected Input | Expected output | Actual output| Type of test case
|--|--|--|--|--|--|
| LLR\_P\_1 |find log of no. using the function|10| 1 | 1 | Scenario |
| LLR\_P\_2 |finding log of grater  then 12 digit numbers | 1806515102031| Error: large result| Error: large Result |Boundary based
| LLR\_P\_3 |finding log of grater  other then numbers | gh,gf| Error | Error |requirement based

## Table No 8.: Low level test plan
| Test ID | Description | expected Input | Expected output | Actual output| Type of test case
|--|--|--|--|--|--|
| LLR\_P\_1 |find antilog of no. using the function|100 | 2 | 2 | Scenario |
| LLR\_P\_2 |finding antilog of grater  then 12 digit numbers | 1806515102031 | Error: large result| Error: large Result |Boundary based
| LLR\_P\_3 |finding antilog of grater  other then numbers | gh,gf| Error | Error |requirement based


## Table No 8.: Low level test plan
| Test ID | Description | expected Input | Expected output | Actual output| Type of test case
|--|--|--|--|--|--|
| LLR\_P\_1 |find square of number | 2,2 | 4 | Scenario |
| LLR\_P\_2 |find square root of number | 100,0.5 | 10 |10| Scenario |
| LLR\_P\_3 |find cube of number | 3,3 | 27 |27 | Scenario |
| LLR\_P\_3 |find power of number | 100000,2 | 10x10^11 | 10x10^11 |Scenario |
| LLR\_P\_3 |find power of other then number | 100000,h | errror | error |Scenario |
| LLR\_P\_3 |find power of other then number | f,65458 | errror | error |Scenario |

