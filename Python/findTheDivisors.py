"""
Create a function named divisors/Divisors that takes an integer n > 1 and returns an array with all of the integer's divisors(except for 1 and the number itself), from smallest to largest. If the number is prime return the string '(integer) is prime' (null in C#, empty table in COBOL) (use Either String a in Haskell and Result<Vec<u32>, String> in Rust).
Examples:

divisors(12) --> [2, 3, 4, 6]
divisors(25) --> [5]
divisors(13) --> "13 is prime"
"""

def divisors(integer):
    arr = [i for i in range(2,integer//2+1) if integer % i == 0]
    return f"{integer} is prime" if len(arr)== 0 else arr

print(divisors(15) == [3,5])
print(divisors(253) == [11,23])
print(divisors(24) == [2,3,4,6,8,12])
print(divisors(25) == [5])
print(divisors(3) == "3 is prime")
print(divisors(3))