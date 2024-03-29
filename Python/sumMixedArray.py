"""
Given an array of integers as strings and numbers, return the sum of the array values as if all were numbers.
Return your answer as a number.
"""

def sum_mix(arr):
    return sum([int(elem) for elem in arr])

print(sum_mix([2, 20, -85, -38, -31, '-42', 35, -64, '-49', -50, 53, 100, '-5', '-32', '-61', 7, 90, -94, '-63', '-43', '-50', 79, -11, 39, '94', -40, -47, 10, '-26', '61', '-96', '-22', '65', 22, '14', -69, 71, '11', '-64', '-84', -64, 31, '55', '-38', -70, '-42', 88, '-39', -37, '-10', '36', 58, '46', 92, '45', 31, -80, 100, '-59', 34, 8, 5, '-17', 7, '55', '-41', '0', 68, '-64', 40, -89, '-13', '2', -100, '-16', 3, -99, 80, '-57', -25, 9, -11, '-80', '48', 85, '69', '-28', '32', '-52', '-5', 0, 59, 16, '17', -43, -67, '-46', 54, -53]))
