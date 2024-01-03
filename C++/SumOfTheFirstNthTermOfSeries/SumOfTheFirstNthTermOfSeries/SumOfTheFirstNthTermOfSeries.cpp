/*
Task:
Your task is to write a function which returns the sum of following series upto nth term(parameter).

Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...
Rules:
You need to round the answer to 2 decimal places and return it as String.

If the given value is 0 then it should return 0.00

You will only be given Natural Numbers as arguments.

Examples:(Input --> Output)
1 --> 1 --> "1.00"
2 --> 1 + 1/4 --> "1.25"
5 --> 1 + 1/4 + 1/7 + 1/10 + 1/13 --> "1.57"
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

std::string seriesSum(int n)
{
    if (n == 0)return "0.00";
    double result = 1;
    for (int i = 1; i < n; ++i) {
        result += 1.0 / ((i * 3) + 1);
    }
    std::ostringstream oss;
    oss << std::setprecision(2) << std::fixed << result; 
    return oss.str();
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (seriesSum(0) == "0.00") << "\n";
    std::cout << (seriesSum(9) == "1.77") << "\n";
    

    return 0;
}