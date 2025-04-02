"""A pangram is a sentence that contains every single letter of the alphabet at least once. For example, the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z at least once (case is irrelevant).

Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.
"""
import string
def is_pangram(st):
    alph=list(string.ascii_lowercase)
    for char in st:
        if char in (list(string.digits) or list(string.whitespace) or list(string.punctuation)) or str.lower(char) not in alph:
            continue
        else:
            alph.remove(str.lower(char))
    return False if len(alph) > 0 else True

pangrams = [ "The quick brown fox jumps over the lazy dog.",
                     "Cwm fjord bank glyphs vext quiz",
                     "Pack my box with five dozen liquor jugs.",
                     "How quickly daft jumping zebras vex.",
                     "ABCD45EFGH,IJK,LMNOPQR56STUVW3XYZ" ]

for pangram in pangrams:
    print(is_pangram(pangram))
