/*
Format any integer provided into a string with "," (commas) in the correct places.

Example:

For n = 100000 the function should return '100,000';
For n = 5678545 the function should return '5,678,545';
for n = -420902 the function should return '-420,902'.
*/
#include <iostream>
#include<string>

std::string numberFormat(long long n) {
    std::string formated = std::to_string(n);
    int counter=0;
    for (int i = formated.size(); i > 0; --i) {
        counter++;
        if(counter%3==0 && i != 1 && formated[i-2] != '-')formated.insert(begin(formated) + i - 1, ',');
    }
    return formated;
}

bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(numberFormat(100000), "100,000") << "\n";
    std::cout << equal(numberFormat(-420902), "-420,902") << "\n";
    std::cout << equal(numberFormat(5678545), "5,678,545") << "\n";
    std::cout << equal(numberFormat(3), "3") << "\n";
    std::cout << equal(numberFormat(-3), "-3") << "\n";

    return 0;
}
