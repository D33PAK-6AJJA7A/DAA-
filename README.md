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
Utilize UNION operation on given two sets of positive integers to output the sorted array

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
3 4
1 8 7
9 1 3 2
Out:
1 2 3 7 8 9
#--------------------------#
Test Case-2
Input:
5 5
1 2 3 4 5
1 2 9 3 5
Out:
1 2 3 4 5 9
```
---

### Theory
Union: the union (denoted by ∪) of a collection of sets is the set of all elements in the collection.
Sorting is the process of arranging the elements of a set in a fashionable order i.e either in ascending or descending order of the elements of the set.

---

### ANALYSIS

**Time Complexity**
|   Approach  |   Time complexity   |
|   --------------  |   ----   |
|    1  |   O((maxALL) * (n+m) ) |
|    2  |   O((n+m)*log(n+m)*(n+m)) | 
|    3  |   O(m*log(m)+n*log(n)+ (n+m)* log(n+m)) |

---

### References

https://en.wikipedia.org/wiki/Union_(set_theory)
