"""
Complete the function scramble(str1, str2) that returns true if a portion of str1 characters can be rearranged to match str2, otherwise returns false.

Notes:

Only lower case letters will be used (a-z). No punctuation or digits will be included.
Performance needs to be considered.
Examples
scramble('rkqodlw', 'world') ==> True
scramble('cedewaraaossoqqyt', 'codewars') ==> True
scramble('katas', 'steak') ==> False
"""
def scramble(s1, s2):
    numOfCharacters1 = {}
    numOfCharacters2 = {}
    
    for char in s1:
        numOfCharacters1[char] = numOfCharacters1.get(char, 0) + 1
    for char in s2:
        numOfCharacters2[char] = numOfCharacters2.get(char, 0) + 1
    
    for char, count in numOfCharacters2.items():
        if numOfCharacters1.get(char, 0) < count:
            return False
    
    return True

print(scramble('rkqodlw', 'world'))