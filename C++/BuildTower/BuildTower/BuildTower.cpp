/*
Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. A tower block is represented with "*" character.

For example, a tower with 3 floors looks like this:

[
  "  *  ",
  " *** ",
  "*****"
]
And a tower with 6 floors looks like this:

[
  "     *     ",
  "    ***    ",
  "   *****   ",
  "  *******  ",
  " ********* ",
  "***********"
]
*/

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
    std::string floor = "";
    std::vector<std::string> vec;
    for (int i = 0; i < nFloors; ++i) {
        for (int j = nFloors - 1; j > i; --j) {
            floor += " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            floor += "*";
        }
        for (int j = nFloors - 1; j > i; --j) {
            floor += " ";
        }
        vec.push_back(floor);
        floor.clear();
    }
    return vec;
}

bool equal(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << equal(towerBuilder(1), { "*" }) << "\n";
    std::cout << equal(towerBuilder(2), { " * ", "***" }) << "\n";
    std::cout << equal(towerBuilder(3), { "  *  ", " *** ", "*****" }) << "\n";

    return 0;
}
