/*
    Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
*/
#include <algorithm>
#include <iostream>
#include <string>

std::string removeExclamationMarks(std::string str) {
    str.erase(remove(begin(str),end(str),'!'),end(str));
    return str;
}

bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;
    std::cout << equal(removeExclamationMarks("Hello World!"),"Hello World" ) << "\n";
    std::cout << equal(removeExclamationMarks("Hello World!!!"), "Hello World") << "\n";
    std::cout << equal(removeExclamationMarks("Hi! Hello!"), "Hi Hello") << "\n";
    std::cout << equal(removeExclamationMarks("Hi!!! Hello!"), "Hi Hello") << "\n";
    std::cout << equal(removeExclamationMarks("Hi! He!l!lo!"), "Hi Hello") << "\n";

    return 0;
}