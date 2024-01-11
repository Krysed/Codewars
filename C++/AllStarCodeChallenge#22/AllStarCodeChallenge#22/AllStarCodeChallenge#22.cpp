/*
This Kata is intended as a small challenge for my students

All Star Code Challenge #22

Create a function that takes an integer argument of seconds and converts the value into a string describing how many hours and minutes comprise that many seconds.

Any remaining seconds left over are ignored.

Note:
The string output needs to be in the specific form - "X hour(s) and X minute(s)"

For example:

3600 --> "1 hour(s) and 0 minute(s)"
3601 --> "1 hour(s) and 0 minute(s)"
3500 --> "0 hour(s) and 58 minute(s)"
323500 --> "89 hour(s) and 51 minute(s)"
*/
#include <iostream>
#include <string>

std::string to_time(unsigned seconds) {
    unsigned hours, minutes;
    hours = seconds%3600;
    minutes = seconds % 60;
    return std::to_string(seconds / 3600) + " hour(s) and " + std::to_string((seconds / 60)%60) + " minute(s)";
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << to_time(3600) << " ";
    std::cout << (to_time(3600) == "1 hour(s) and 0 minute(s)") << "\n";
    std::cout << (to_time(3500) == "0 hour(s) and 58 minute(s)") << "\n";
    std::cout << (to_time(323500) == "89 hour(s) and 51 minute(s)") << "\n";
    std::cout << (to_time(0) == "0 hour(s) and 0 minute(s)") << "\n";

    return 0;
}
