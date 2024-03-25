"""
You have to write a function that receives a list, list size will always be at least 3 numbers. The missing term will never be the first or last one.

Example
find_missing([1, 3, 5, 9, 11]) == 7
PS: This is a sample question of the facebook engineer challenge on interviewstreet. I found it quite fun to solve on paper using math, derive the algo that way. Have fun!
"""

def find_missing(sequence):
    diff = (sequence[-1] - sequence[0]) / len(sequence)
    tmp = sequence[0]
    for elem in  sequence:
        if elem != tmp:
            return int(tmp)
        tmp += diff

print(find_missing([1, 3, 5, 9, 11]))
print(find_missing([1, 3, 4, 5, 6, 7, 8, 9]))