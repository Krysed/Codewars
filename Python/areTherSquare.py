"""
Write a function that checks whether all elements in an array are square numbers. The function should be able to take any number of array elements.

Your function should return true if all elements in the array are square numbers and false if not.

An empty array should return undefined / None / nil /false (for C). You can assume that all array elements will be positive integers.

Examples:

is_square([1, 4, 9, 16]) --> True

is_square([3, 4, 7, 9]) --> False

is_square([]) --> None
"""
from math import sqrt

def is_square(arr):
    if len(arr) == 0:
        return None
    
    return all(sqrt(num) % 1 == 0 for num in arr)

print(is_square([1, 4, 9, 16, 25, 36]))
print(is_square([1, 2, 3, 4, 5, 6]))