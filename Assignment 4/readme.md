# Assignment 1


**Team Members**
|   Enrollment No.  |   Name   |
|   --------------  |   ----   |
|    IIT2019019  |   BISWAJEET DAS |
|    IIT2019020  |   HRITIK SHARMA | 
|    IIT2019018  |   SHREYANSH PATIDAR |

**Group No-**"6"

**Faculty Name-**"DR. MOHAMMED JAVED"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Implement Strassen’s Matrix Algorithm

---
## How to use code
```
#Download project
git clone https://github.com/Athe1stB/DAA_IIT2019018-20 
```
Project Initialize
```
cd daa
#create assignment-1 folder
mkdir assignment_01

#go to assignment-1
cd assignment_01
```
Run the code
```
gcc approach3.c
./a.out
```
**Test case**
```
Test Case-1
Input:
2
1 2
3 4
1 1
1 2
Out:
3	5	
7	11	
#--------------------------#
Test Case-2
Input:
4
1 2 1 1
3 4 2 2
1 1 1 2
1 2 2 2
1 2 1 1
3 4 2 2
1 1 1 2
1 2 2 2

Out:
9   13  8   9	
19  28  17  19	
7   11  8   9	
11  16  11  13	

```
---

### Theory
Let us consider two matrices X and Y. We want to calculate the resultant matrix Z by multiplying X and Y. Matrix multiplication is a {binary operation} that produces a{matrix} from two matrices. 
For matrix multiplication, the number of columns in the first matrix must be equal to the number of rows in the second matrix. The resulting matrix, known as the matrix product, has the number of rows of the first and the number of columns of the second matrix.

---

### ANALYSIS

**Time Complexity**
|   Approach  |   Time complexity   |
|   --------------  |   ----   |
|    1  |   O(n* n* n) |
|    2  |   O(n^ log(7)) | 

---

### References
[1] https://en.wikipedia.org/wiki/Subsequence
[2] https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/
[3] https://www2.cs.duke.edu/courses/spring18/compsci330/Notes/dynamic.pdf


