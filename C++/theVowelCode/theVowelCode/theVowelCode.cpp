/*
Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:

a -> 1
e -> 2
i -> 3
o -> 4
u -> 5
For example, encode("hello") would return "h2ll4". There is no need to worry about uppercase vowels in this kata.

Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.

For example, decode("h3 th2r2") would return "hi there".

For the sake of simplicity, you can assume that any numbers passed into the function will correspond to vowels.
*/

#include <iostream>
#include <string>

std::string encode(const std::string& str) {
    std::string tmp = "";
    for (char c : str) {
        switch (c)
        {
        case 'a': { tmp += '1'; break; }
        case 'e': { tmp += '2'; break; }
        case 'i': { tmp += '3'; break; }
        case 'o': { tmp += '4'; break; }
        case 'u': { tmp += '5'; break; }
        default: { tmp += c; break; }
        }
    }
    return tmp;
}

std::string decode(const std::string& str) {
    std::string tmp = "";
    for (char c : str) {
        switch (c)
        {
        case '1': { tmp += 'a'; break; }
        case '2': { tmp += 'e'; break; }
        case '3': { tmp += 'i'; break; }
        case '4': { tmp += 'o'; break; }
        case '5': { tmp += 'u'; break; }
        default: { tmp += c; break; }
        }
    }
    return tmp;
}

bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    //encode
    std::cout << equal(encode("hello"), "h2ll4") << "\n";
    std::cout << equal(encode("How are you today?"), "H4w 1r2 y45 t4d1y?") << "\n";
    std::cout << equal(encode("This is an encoding test."), "Th3s 3s 1n 2nc4d3ng t2st.") << "\n";

    //decode
    std::cout << equal(decode("h2ll4"), "hello") << "\n";
    std::cout << equal(decode("H4w 1r2 y45 t4d1y?"), "How are you today?") << "\n";
    std::cout << equal(decode("Th3s 3s 1n 2nc4d3ng t2st."), "This is an encoding test.") << "\n";

    return 0;
}