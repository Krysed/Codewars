"""We are given two arrays of integers A and B and we have to output a sorted array with the integers that fulfill the following constraints:

    they are present in both ones

    they occur more than once in A and more than once in B

    their values are within a given range (inclusive)

    they are odd or even according as it is requested

Example

Given two arrays, a range, and a wanted parity:

arrA = [1, -2, 7, 2, 1, 3, 7, 1, 0, 2, 3]
arrB = [2, -1, 1, 1, 1, 1, 2, 3, 3, 7, 7, 0]
rng = [-4, 4] # is the range of the integers from -4 to 4 (inclusive)
wanted = "odd"

Process to obtain the result:

0, 1, 2, 3, 7, are the numbers present in arrA and arrB
1, 2, 3, 7,  occur twice or more in arrA and arrB
1, 2, 3,  are in the range [-4, 4]
1, 3, are odd
output = [1, 3] 

For the case:

arrA = [1, -2, 7, 2, 1, 3, 4, 7, 1, 0, 2, 3, 0, 4]
arrB = [0, 4, 2, -1, 1, 1, 1, 1, 2, 3, 3, 7, 7, 0, 4]
rng = [-4, 4]
wanted = "even"
output = [0, 2, 4] 

If there are no elements that fulfill the constraints given above, the result will be an empty array.

Features of the tests:

Number of Random Tests = 300
Length of the arrays A and B between 1000 and 10000

You may assume that you will always receive valid entries for all the tests.

Enjoy it!!
"""
from collections import Counter

def find_arr(arr_a, arr_b, rng, wanted):
    common_elements = set(arr_a) & set(arr_b)
    count_a = Counter(arr_a)
    count_b = Counter(arr_b)
    
    valid_elements = {x for x in common_elements if count_a[x] > 1 and count_b[x] > 1}
    valid_elements = {x for x in valid_elements if rng[0] <= x <= rng[1]}
    
    if wanted == "odd":
        final_list = [x for x in valid_elements if x % 2 == 1]
    else:
        final_list = [x for x in valid_elements if x % 2 == 0]
    
    return sorted(final_list)


arr_a = [1, -2, 7, 2, 1, 3, 4, 7, 1, 0, 2, 3, 0, 4]
arr_b = [0, 4, 2, -1, 1, 1, 1, 1, 2, 3, 3, 7, 7, 0, 4]
rng = [-4, 4]
wanted = 'even'
print(find_arr(arr_a, arr_b, rng, wanted))
