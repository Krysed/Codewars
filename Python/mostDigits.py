"""
Find the number with the most digits.

If two numbers in the argument array have the same number of digits, return the first one in the array.
"""

def find_longest(arr):
    max_length = max(len(str(x)) for x in arr)
    for elem in arr:
        if len(str(elem)) == max_length:
            return elem

print(find_longest([1, 10, 100]))
