"""
omplete the function/method so that it takes a PascalCase string and returns the string in snake_case notation. Lowercase characters can be numbers. If the method gets a number as input, it should return a string.

Examples
"TestController"  -->  "test_controller"
"MoviesAndBooks"  -->  "movies_and_books"
"App7Test"        -->  "app7_test"
1                 -->  "1"
"""

def to_underscore(string):
    return str(string) if isinstance(string,int) else ''.join(['_' + char.lower() if char.isupper() else char for char in string]).lstrip('_')

print(to_underscore("TestController"))
print(to_underscore("1"))