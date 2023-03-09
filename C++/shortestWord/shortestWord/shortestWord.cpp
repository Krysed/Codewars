/*
Simple, given a string of words, return the length of the shortest word(s).
String will never be empty and you do not need to account for different data types.
*/
#include <iostream>
#include <string>

int find_short(std::string str)
{
    int min = str.length();
    int tmp = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] != ' ') {
            tmp++;
        }
        else
        {
            min > tmp ? min = tmp : min;
            tmp = 0;
        }
    }
    if (min > tmp) min = tmp;
    return min;
}
bool equal(int a, int b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << equal(find_short("bitcoin take over the world maybe who knows perhaps"), 3) << "\n";
    std::cout << equal(find_short("turns out random test cases are easier than writing out basic ones"), 3) << "\n";
    std::cout << equal(find_short("lets talk about javascript the best language"), 3) << "\n";
    std::cout << equal(find_short("i want to travel the world writing code one day"), 1) << "\n";
    std::cout << equal(find_short("Lets all go on holiday somewhere very cold"), 2) << "\n";
    std::cout << equal(find_short("Let's travel abroad shall we"), 2) << "\n";
    return 0;
}
