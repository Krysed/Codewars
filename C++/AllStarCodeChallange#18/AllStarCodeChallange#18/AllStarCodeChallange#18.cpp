/*
Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.

If no occurrences can be found, a count of 0 should be returned.

("Hello", "o")  ==>  1
("Hello", "l")  ==>  2
("", "z")       ==>  0
str_count("Hello", 'o'); // returns 1
str_count("Hello", 'l'); // returns 2
str_count("", 'z'); // returns 0
Notes
The first argument can be an empty string
In languages with no distinct character data type, the second argument will be a string of length 1
*/
#include <iostream>
#include <string>

unsigned int strCount(const std::string& word, char letter) {
    int counter = 0;
    for (char c : word)
        if (c == letter) counter++;
    return counter;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (strCount("Hello", 'o') == 1) << "\n";
    std::cout << (strCount("Hello", 'l') == 2) << "\n";
    std::cout << (strCount("Hello", 'q') == 0) << "\n";
    std::cout << (strCount("Hello", 'p') == 2) << "\n";
    std::cout << (strCount("", 'l') == 0) << "\n";

    return 0;
}
