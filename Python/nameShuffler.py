"""
Write a function that returns a string in which firstname is swapped with last name.

Example(Input --> Output)

"john McClane" --> "McClane john"
"""

def name_shuffler(str_):
    return ' '.join((reversed(str.split(str_))))

print(name_shuffler('john McClane'))
print(name_shuffler('Mary jeggins'))
print(name_shuffler('tom jerry'))