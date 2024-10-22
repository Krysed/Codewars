"""
Write a program that will calculate the number of trailing zeros in a factorial of a given number.

N! = 1 * 2 * 3 *  ... * N

Be careful 1000! has 2568 digits...

For more info, see: http://mathworld.wolfram.com/Factorial.html
Examples
N 	Product 	N factorial 	Trailing zeros
6 	1*2*3*4*5*6 	720 	1
12 	1*2*3*4*5*6*7*8*9*10*11*12 	479001600 	2

Hint: You're not meant to calculate the factorial. Find another way to find the number of zeros.
"""

def zeros(n):
    z = 0
    k = 1
    while True:
        power_of_5 = 5 ** k
        if power_of_5 > n:
            break
        z += n // power_of_5
        k += 1
    return z

print(zeros(0) == 0)
print(zeros(6) == 1)
print(zeros(30) == 7)
print(zeros(100) == 24)
print(zeros(1000) == 249)
print(zeros(100000) == 24999)
print(zeros(1000000000) == 249999998)
