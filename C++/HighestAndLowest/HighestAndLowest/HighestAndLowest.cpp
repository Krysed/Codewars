#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string highAndLow(const std::string& numbers) {
    std::stringstream ss(numbers);
    int tmp;

    ss >> tmp;
    int min = tmp;
    int max = tmp;

    while (ss >> tmp) {
        min = std::min(min, tmp);
        max = std::max(max, tmp);
    }

    return std::to_string(max) + " " + std::to_string(min);
}

bool test(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha << test(highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4"), "42 -9") << '\n';
    std::cout << test(highAndLow("1 2 3"),"3 1") << '\n';
    std::cout << test(highAndLow("1 2 3"), "3 1") << '\n';

    return 0;
}
