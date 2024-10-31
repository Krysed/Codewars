"""
Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit, there are 3 multiplications)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2, there are 4 multiplications)
4 --> 0 (because 4 is already a one-digit number, there is no multiplication)
"""

def persistence(n):
    st = list(str(n))
    counter = 0
    while len(st) > 1:
        tmp = 1
        for elem in st:
            tmp*=int(elem)
        st = list(str(tmp))
        counter += 1
    return counter

print(persistence(4))
print(persistence(25))
print(persistence(39))
print(persistence(999))
