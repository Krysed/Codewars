"""
Write Number in Expanded Form

You will be given a number and you will need to return it as a string in Expanded Form. For example:

expandedForm(12)    --> should return "10 + 2"
expandedForm(42)    --> should return "40 + 2"
expandedForm(70304) --> should return "70000 + 300 + 4"

NOTE: All numbers will be whole numbers greater than 0.

If you liked this kata, check out part 2!!
"""

def expanded_form(num):
    numbers = str(num)
    expanded_num = []
    for i, number in enumerate(numbers):
        if number != '0':
            expanded_num.append(number + '0' * (len(numbers)-i-1))
    return ' + '.join(expanded_num)

print(expanded_form(12))
print(expanded_form(1234))
print(expanded_form(12345))