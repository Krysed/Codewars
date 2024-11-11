"""
Given an integer as input, can you round it to the next (meaning, "greater than or equal") multiple of 5?

Examples:

input:    output:
0    ->   0
2    ->   5
3    ->   5
12   ->   15
21   ->   25
30   ->   30
-2   ->   0
-5   ->   -5
etc.

Input may be any positive or negative integer (including 0).

You can assume that all inputs are valid integers.
"""

round_to_next5 = lambda n: n + 5 - n % 5 if n % 5 != 0 else n

print(round_to_next5(0))
print(round_to_next5(2))
print(round_to_next5(3))
print(round_to_next5(12))
print(round_to_next5(32))

