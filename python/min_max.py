#Minima and Maxima of list

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    arr.sort()                              #Sorting the list in ascending order
    max = 0
    min = 0
    for i in range(len(arr)-1):             #Not choosing the last and biggest element
        min += arr[i]
    for j in range(1,len(arr)):             #Not choosong the first and smallest element
        max += arr[j]
    
    print (min , max)



if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
