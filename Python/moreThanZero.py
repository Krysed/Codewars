"""
Correct this code so that it takes one argument, x, 
and returns "x is more than zero" if x is positive (and nonzero), and otherwise, 
returns "x is equal to or less than zero." In both cases, replace x with the actual value of x.
"""

def corrections(x):
    return str(x) + " is more than zero." if x > 0 else str(x) + " is equal to or less than zero."

print(corrections(1))
print(corrections(0))