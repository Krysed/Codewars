/*
Filter the number
Oh, no! The number has been mixed up with the text. Your goal is to retrieve the number from the text, can you return the number back to its original state?

Task
Your task is to return a number from a string.

Details
You will be given a string of numbers and letters mixed up, you have to return all the numbers in that string in the order they occur.


*/
#include <algorithm>
#include <iostream>
#include <string>

long long filter_string(const std::string& value)
{
    std::string tmp = "";
    std::for_each(begin(value), end(value), [&tmp](auto c) {if (isdigit(c)) tmp += c; });
    return std::stoll(tmp); 
}
bool equal(long long a, long long b){
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(filter_string("123"), 123) << "\n";
    std::cout << equal(filter_string("a1b2c3"), 123) << "\n";
    std::cout << equal(filter_string("aa1bb2cc3dd"), 123) << "\n";

    return 0;
}
