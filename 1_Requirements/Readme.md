# Requirements
The calculator build by us includes basic arithmetic functions, trignometric functions and exponential functions. It also consists of some other functions including power, log, antilog, permutation and combination functions.
## Introduction

We have attempted to build the software development cycle of a semi-engineering calculator. It includes the numerous high-level and low-level requirements of the various features involved in semi-engineering such as log, antilog, exponents roots and polynomial functions. It then explores about the various test cases that should be taken in consideration such that all requirements are taken care of. In the end, we build the codes that follow all the requirements and design efficiently as per them.
 
## Research

There are different types of calculators with respect to the cost and its features. It is plotted in the graph shown below which shows the range of calculators for highest cost and lowest feature and vice versa. The range we have chosen is for a medium range cost and feature. It is similar to a programmable scientific calculator. It will be more efficient for the multipurpose use.
![It consists of the cost vs features graph which depicts what calculator supports how many features in comparison with the cost provided](https://user-images.githubusercontent.com/78869160/107908451-15f5f300-6f7c-11eb-812a-11f2a8746f17.png)




# Cost of the Calculator 
* Our Calculator will sum around 800 Rs , having all neccesary features required for all students 
* Cost and features mainly focus on most of the important requirments we reasearched for a calculator.

# Features that are integrated in our project calculator are : 
* Will perform basic Addition,Subtraction,divison,Multiplication with validtaion
* Also it can perform long division approach with remainder and quotient as a result
* Addition of Hexa decimal number
* Calucaltion of GCD
* Basic Trigonometry operation like Sine,Cos,Tan
* perofrming the power function i.e calucalting the power of the number
* Integrated with operation like logrithimic and Antilog calculation
* Factorial of numbers and Exponential 
* Mean of the numbers
* Conversion of Units


## Defining Our System

Our system is more or less semi advanced which basically able to do desirable calculations of daily basis from bottom to top level i.e. it includes every basic operations which eats lots of time in scheduled timings.  

## SWOT ANALYSIS
![SWOT Analysis](https://user-images.githubusercontent.com/78869361/107869760-91da3780-6eb7-11eb-83fb-4aace3c89394.jpg)

# 4W&#39;s and 1&#39;H

## Who:
* School students, 
college personnel of Science and Engineering,
Professionals at industrial level


## What:
* Calculate problems in Science, engineering & mathematics. 
In some aspects of astronomy, physics and chemistry. 

## When:

* In situations that require quick access to certain mathematical functions(trignomety, logrithmic,etc)

## Where:

* Widely used in both educational and professinal settings(Institutions, laboratories).

## How:

* Our calculator is a simple tool that any user can efficienlty use at the time of most basic as well as complex calulcations.

# Detail requirements
## High Level Requirements:

|**id**  |**Requirments**  | **Description**  |**Status**  |
| --- | --- | --- | --- |
|HL001 | CALCULATING NUMBERS | BASIC ARITHMETIC CALCULATION- Addition- Subtraction- Division- multiplication |Implemented |
|HL002 |LOG ANTILOG & POWER OPERATIONS | SOLVING POWER FUNCTIONS AND LOG/ANTILOG OPERATIONS|IMPLEMENTED |
|HL003 |TRIGONOMETRIC FUNCTIONS|- SINE- COSINE- TAN |IMPLEMENTED |
|HL004 |PERMUTATION & COMBINATION |  PnC FORMULAE OUTPUTS |IMPLEMENTED|
|HL005 |CONVERSIONS OF UNITS |  UNIT COVERSIONS FOR TEMPERATURE,LENGTH UNITS,etc  |IMPLEMENTED|
|HL005 |FACTORIAL |  FACTORIAL OF THE POSITIVE NUMBERS  |IMPLEMENTED |


##  Low level Requirements:
Arithmetic Operation:
![Low Level Requirements](https://user-images.githubusercontent.com/78871033/107877502-e6e76f00-6ef2-11eb-9db1-a903f1b9325b.png)
Precedence:
|ID| Requirements  |Description| Status|
|--|--|--|--|
|BOD_1 | Bracket Type |For more than 1 operation, brackets((),[],{}) should be identified and executed first.|Implemented
|BOD_2|Bracket order 1|The bracket order (), {}, [] is to be followed.|Implemented
|BOD_3|Bracket order 2|For more than 1 operation, powers and roots should be identified and executed after brackets.|Implemented
|BOD_4|Bracket order 3| For more than 1 operation, Division should be identified and executed after exponents and roots.|Implemented
|BOD_5|Bracket order 4|  For more than 1 operation, Multiplication should be identified and executed after Division.|Implemented
|BOD_6|Bracket order 5|  For more than 1 operation, Multiplication should be identified and executed after Division.|Implemented
|BOD_7|Bracket order 6| For more than 1 operation, Addition should be identified and executed after Multiplication.|Implemented
|BOD_8|Bracket order 7| For more than 1 operation, subtraction should be identified and executed after Addition.|Implemented
|BOD_9|Bracket order 8| For more than 1 operation, the calculation should start from left to right.| Implemented

Store and Recall:
|ID| Requirements  |Description| Status|
|--|--|--|--|
|BOD_1 | Stored value |-   Capable of storing values for 50 days|Implemented
|BOD_2|MC function|-   Pressing ‘MC’ and 0 clears the memory|Implemented
|BOD_3|Memory storage|-   Stores up to 5 memories.|Implemented
|BOD_4|Memory style| -   Show all memories in a first in last out style after every click|Implemented

Permutation and combination:
|ID| Requirements  |Description| Status|
|--|--|--|--|
|PER_1 |n<R |shows error when N<R|Implemented
|PER_2|Formulae calculation Permutation|finds permutation using the formulae|Implemented
|COM_1 |n<R |shows error when N<R|Implemented
|COM_2|Formulae calculation combination|finds combination using the formulae|Implemented

Precision:
|ID| Requirements  |Description| Status|
|--|--|--|--|
|pre_1 |Multiplication power |When multiplication of 10 digit it should show in power of ten| Implemented
|pre_2|divided by 0|-   When value is divided by zero then zero then it should through error.| Implemented
|pre_3|Boundary Precision| user puts value of more then 10 then it must not except more then that and print limit exceeds as an output.| Implemented
|COM_3|Formulae calculation combination |finds combination using the formulae.|Implemented
|COM_1 |n<R |shows error when N<R|Implemented

power:
|ID| Requirements  |Description| Status|
|--|--|--|--|
|pre_1 |Library |Math library file will required in coding section.| Implemented
|pre_2|power function| Requirement of power function while executing this section of program..| Implemented
|pre_3|Data type |Must contain best suited data types else show| Implemented
|pre_3|Boundary limit| Limit exceeds.| Implemented

Conversion Of Units:
|ID| Requirements  |Description| Status|
|--|--|--|--|
|COU_1 | Length conversion |converts input from cm to m &km|Implemented
|COU_2|Temperature conversion |converts user input from Celcius to fahrenheit|Implemented
|COU_3|Degree to radian conversion |converts one user input from deg to rad at a time|Implemented
