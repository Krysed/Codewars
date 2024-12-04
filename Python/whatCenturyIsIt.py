"""
Return the century of the input year. The input will always be a 4 digit string, so there is no need for validation.
Examples

"1999" --> "20th"
"2011" --> "21st"
"2154" --> "22nd"
"2259" --> "23rd"
"1124" --> "12th"
"2000" --> "20th"
"""

from math import floor
def what_century(year):
    cent = floor(int(year)/100)
    if cent < float(year)/100:
        cent += 1
    century = str(cent)
    ending = ""
    if century[-1] == "1" and century != "12":
        ending = "st"
    elif century[-1] == "2" and century != "12":
        ending = "nd"
    elif century[-1] == "3" and century != "13":
        ending = "rd"
    else:
        ending = "th"
    
    return century+ending
    

print(what_century("1999"))
print(what_century("2000"))
print(what_century("2031"))
print(what_century("1132"))
