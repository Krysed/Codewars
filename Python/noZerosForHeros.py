"""
Numbers ending with zeros are boring.

They might be fun in your world, but not here.

Get rid of them. Only the ending ones.

1450 -> 145
960000 -> 96
1050 -> 105
-1050 -> -105
Zero alone is fine, don't worry about it. Poor guy anyway
"""

def no_boring_zeros(n):
    if n == 0:
        return n
    tmp = str(n)
    while len(tmp) > 1 and tmp[-1] == "0":
        tmp = tmp[:-1]
    return int(tmp)

print(no_boring_zeros(1450))
print(no_boring_zeros(960000))
print(no_boring_zeros(0))