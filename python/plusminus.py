#!/bin/python3
#Given an array of integers, calculate the fractions of its elements that are positive, 
# negative, and are zeros. Print the decimal value of each fraction on a new line.

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr,n):
#    pass
    count_p = 0
    count_n = 0
    count_z = 0
    for i in range(n):
        if arr[i] > 0:
            count_p +=1
    ans1 = count_p/n
    print("%.6f" %ans1)

    for j in range(n):
        if arr[j] < 0:
            count_n +=1
    ans2 = count_n/n
    print("%.6f" %ans2)

    for k in range(n):
        if arr[k] == 0:
            count_z +=1
    ans3 = count_z/n
    print("%.6f" %ans3)
    


if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))
    if len(arr) !=n:
        exit('Try again')

    plusMinus(arr,n)
