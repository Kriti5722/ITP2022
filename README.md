# ITP--2022
A simple solution is to run two loops . For every item count number of times , it occurs . To avoid duplicate printing , keep track of processed items . 
# Assignment-1

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
   write a c programme to count the frequency of each element in the array and print all.

---
## How to use code
here is the simplified way to download and run the code.
#Download project
git clone https://github.com/Kriti5722/ITP--2022 
```
Project Initialize 
```
cd daa
#create assignment-1 folder
mkdir assignment_01

#go to assignment-1
cd assignment_01

#Create file
touch readme.md
touch main.py
.
.
```
---Frequency count.C

Test Case-1

Input:
1,2,2,1,3,3,5,3,1
Output:
 the frequency of 1 is 3
 the frequency of 2 is 2
 the frequency of 3 is 3
 the frequency of 5 is 1

Test Case-2

Input:
1,2,8,3,2,2,2,5,1,
Output:
 the frequency of 2 is 4
 the frequency of 8 is 1
 the frequency of 3 is 1
 the frequency of 5 is 1


### Theory
1. Declare and initialize an array arr. 
2. Declare another array fr with the same size of array arr. It is used to store the 
frequencies of elements present in the array. 
3. Variable visited will be initialized with the value -1. It is required to mark an element 
visited, which help us to avoid counting the same element again. 
4. The frequency of an element can be counted using two loops. One loop will be used 
to select an element from an array, and another loop will be used to compare the 
selected element with the rest of the array. 
5. Initialize count to 1 in the first loop to maintain a count of each element. Increment its 
value if a duplicate element is found in the second loop. Since we have counted this 
element and didn’t want to count it again. Mark this element as visited by setting 
fr[j]=visited. Store count of each element to fr.
6. Finally print the elements in the array along with their frequencies .

### Analysis

**Time Complexity**

In the above algorithm to find the frequency of an 
element we used two nested for loops. 
● One loop to select an element from an array, and 
another to compare the selected element with 
the rest of the array. 

● This resulted in the time complexity of O(n2)


### References
https://www.geeksforgeeks.org/counting-frequencies-of-array-elements/

