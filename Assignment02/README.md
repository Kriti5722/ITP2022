# ITP--2022
A simple solution is to use structure to store information about parts of engine like serial number, year of manufacturing, material used, its quantity and to retrieve the information of engine parts between BB1 to CC6 .

# Assignment-2

**Team Members**
|   Enrollment No.  |   Name                 | GithubId        |
|   --------------  |   -------------------- | ----------------|
|    IEC2021067     |   KRITI SHUKLA         | Kriti5722       |
|    IEC2021068     |   MANYA AGRAWAL        | Manyya123       |
|    IEC2021069     |   ASWITHA SAI          | AswithaSai      |
|    IEC2021070     |   NAMAN SUHANE         | NamanSuhane174  |

**Group No-**"17group"

**Faculty Name-**"Dr.MohammedJaved"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
   An automobile company has serial number from AA0 to FF9. The other characteristics of parts to be specified in a structure are : Year of manufacturing, material used and quantity manufactured.
a) Specify a structure to store information corresponding to a part
b) Write a program to retrieve information on parts with serial 
number between BB1 and CC6

---
## How to use code
here is the simplified way to download and run the code.
#Download project
git clone https://github.com/Kriti5722/ITP--2022 
```
Project Initialize 
```
cd daa
#create assignment02 folder
mkdir assignment02

#go to assignment02
cd assignment02

#Create file
touch readme.md
touch main.py
.
.
```
---structure.C

Test Case-1


Output:
 ITP_GROUP17
enter no of parts :5
serial no:AA1
Quantity:4
Year Of Manufacturing:2003
Material Used:SILVER
serial no:BB3
Quantity:4
Year Of Manufacturing:2004
Material Used:GOLD
serial no:CC2
Quantity:4
Year Of Manufacturing:2004
Material Used:SILVER
serial no:DD5
Quantity:4
Year Of Manufacturing:2003
Material Used:DIAMOND
serial no:AA4
Quantity:4
Year Of Manufacturing:2003
Material Used:SILVER
Info about the parts with serial no.between BB1 and CC6
:serial no:BB3
Quantity:4
Year of Manufacturing:2004
MaterialUsed:GOLD


### Theory
1. We have created a structure data type for the engine to store information of different types corresponding to different parts of the engine.
2. We have initialized char data type for storing the serial no. and kind material used
3. We take no parts of the engine from the user using printf and scanf statements.
4. We run the first ‘for’ loop to get information like "serial no","quantity", "Year of manufacturing", and "material used " corresponding to each part from the user.
5. Now we run one more ‘for’ loop to retrieve information of the parts with serial numbers between BB1 and CC6.
6. "Continue" statement helps us to execute the next iteration of the loop instead of coming out of the loop if the given condition fails for something.
   Here we used an "if" condition for char A and then continue and for char more then C and continue to get information of parts only between BB1 and CC6.
7. At last we use a printf statement "info about the parts between BB1 and CC6 " to 
print the information corresponding to that part.


### Analysis

**TIME OF EXECUTION**


Case1- 62.568ms 
Case 2- 65.683ms
Case 3- 67.536ms 

Average time of execution: (62.568+65.683+67.536)/3 = 65.262
                                    


### References
	Let us C by Yashavant Kanetkar
