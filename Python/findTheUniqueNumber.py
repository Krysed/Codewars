"""
There is an array with some numbers. All numbers are equal except for one. Try to find it!

find_uniq([ 1, 1, 1, 2, 1, 1 ]) == 2
find_uniq([ 0, 0, 0.55, 0, 0 ]) == 0.55
It’s guaranteed that array contains at least 3 numbers.

The tests contain some very huge arrays, so think about performance.

This is the first kata in series:

Find the unique number (this kata)
Find the unique string
Find The Unique
"""

def find_uniq(arr):
    tmp1 = arr[0]
    counter = 0
    converted = set(arr)
    for n in range(3):
        if arr[n] == tmp1:
            counter += 1
    if counter == 1: return tmp1
    for n in converted:
        if n != tmp1:
            return n

print(find_uniq([0,0,0,1,0,0,0]))