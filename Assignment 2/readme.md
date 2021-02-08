# Assignment 2


**Team Members**
|   Enrollment No.  |   Name   |
|   --------------  |   ----   |
|    IIT2019018  |   SHREYANSH PATIDAR |
|    IIT2019019  |   BISWAJEET DAS |
|    IIT2019020  |   HRITIK SHARMA | 

**Group No-**"6"

**Faculty Name-**"DR. MOHAMMED JAVED"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Create a matrix of size 50 x 50 of numbers ranging from 0 to 9 and find the length of the largest sorted component reversed horizontally.

---
## How to use code
```
#Download project
git clone https://github.com/Athe1stB/DAA-
```
Project Initialize
```
cd daa
#create assignment-2 folder
mkdir assignment_02

#go to assignment-2
cd assignment_02
```
Run the code
```
gcc approach2.c
./a.out
```
**Test case**
```
Test Case-1
Input:
3 3
1 2 1
3 2 1
4 5 6
3
#--------------------------#
Test Case-2
Input:
4 4
1 2 3 4
6 5 4 3
1 2 2 2
2 3 4 5
Out:
4
```
---

### Theory
A subsequence is a sequence contained in or forming part of another sequence.
Sorting is the process of arranging the elements of a set in a fashionable order i.e either in ascending or descending order of the elements of the set.

---

### ANALYSIS

**Time Complexity**
|   Approach  |   Time complexity   |
|   --------------  |   ----   |
|    1  |   O(n*n*n + n*n) |
|    2  |   O(n*(n*n*log(n)) ) |

---

### References

https://en.wikipedia.org/wiki/sequences_(set_theory)
