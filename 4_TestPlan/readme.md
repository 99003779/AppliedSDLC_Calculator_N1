# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Out of Range check for Arithemic |Max Addition upto 12 digit  | Some value |Overflow Error|Requirement based |
|  H_02       |Check for long number| eg :- 1234567889023 | Some value |Invalid output|Requirement based |
|  H_03       |bracket should be open and close if used|  (2x-3=0|(2x-3=0) |Invalid output|Scenario based |
|  H_04   |    Putting values in valid format| vales to be performed|display valid output|Error if invalid |Scenario based    |
|  H_05       |= sign in the expression  |  2x=3y=10  |valid result|valid result|Boundary based    |
| H\_06 | When n\&lt;r for nPr | n=2 r=3 | Error | Error | Scenario |
| --- | --- | --- | --- | --- | --- |
| H\_07 | When n\&lt;r fornCr | n=2 r=3
 | Error | Error | Scenario |
| H\_08 | ExponentialF(x) =a(b^x)Where b is positive real no.&amp; b not equal to 1 | x=3a=2b=2 | 16 | 16 | Requirement |
| H\_09 | Power fxnF(x)= x^rWhere r is greater than equals to 0 | x=2r=3
 | 8 | 8 | requirement |


## Table no: Low level test plan


| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Verify that BODMAS is applied in case of complex queries and the correct result is returned.| 24+3*2 |30 | 30|Requirement based |
|  L_02       |Addition of 2 or more numbers  |  20+30 |50|50|Scenario based    |
|  L_03       |Sequential incorrect parameter  |   2+4*3.y|20|Error|Boundary based    |
|  L_04       |Out of range check   |   addition if exceed 15 digit numbers|any output|Result out of range|Requirement based    |
|  L_05       |Sequential incorrect parameter  |   2+4*3.y|20|Error|Boundary based    |
| L_06   | Two symbol cannot be between numbers        | 3++5      | 2  | Invalid Format|Scenario based |
| L_07   | Trigonometry Co-function Identities        | sin(90°−x)      | cos x| cos x   |Boundary based 
| L_08   | Trigonometry Reciprocal Identities         | 1/sec θ      | cos θ | cos θ  |Requirement based
| L_09   | Logarithmic input check         | If input is negative      | some value | Not a number  |Requirement based
