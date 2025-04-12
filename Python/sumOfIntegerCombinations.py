"""
Consider the array [3,6,9,12]. If we generate all the combinations with repetition that sum to 12, we get 5 combinations: [12], [6,6], [3,9], [3,3,6], [3,3,3,3]. The length of the sub-arrays (such as [3,3,3,3] should be less than or equal to the length of the initial array ([3,6,9,12]).

Given an array of positive integers and a number n, count all combinations with repetition of integers that sum to n. For example:

find([3,6,9,12],12) = 5.

More examples in the test cases.

Good luck!

If you like this Kata, please try:

Array combinations

Sum of prime-indexed elements
"""

def find(arr,n):
    reversed_arr = sorted(arr,reverse=True)
    result = []
    def req(start, target, path, arr_len):
        if target == 0:
            result.append(path)
            return
        if len(path) >= arr_len:
            return
        for i in range(start, len(arr)):
            if arr[i] > target:
                continue
            req(i, target - arr[i], path + [arr[i]], arr_len)
    req(0, n, [], len(reversed_arr))
    return len(result)

tests = [[[1,2,3],10],[[1,2,3],7],[[1,2,3],5],[[3,6,9,12],12],[[1,4,5,8],8],[[3,6,9,12],15]]
for test in tests:
    print(find(test[0],test[1]))
