/*
You are given a string representing a number in binary. Your task is to delete all the unset bits in this string and return the corresponding number (after keeping only the '1's).

In practice, you should implement this function:

long eliminate_unset_bits(string number);
Examples
eliminate_unset_bits("11010101010101") ->  255 (= 11111111)
eliminate_unset_bits("111") ->  7
eliminate_unset_bits("1000000") -> 1
eliminate_unset_bits("000") -> 0
*/
#include <iostream>
long eliminate_unset_bits(std::string number) {
    int counter = 0;
    for (char c : number) if (c == '1')counter++;
    return std::pow(2, counter) - 1;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (eliminate_unset_bits("11010101010101") == 255) << "\n";
    std::cout << (eliminate_unset_bits("111") == 7) << "\n";
    std::cout << (eliminate_unset_bits("1000000") == 1) << "\n";
    std::cout << (eliminate_unset_bits("000000") == 0) << "\n";

    return 0;
}
