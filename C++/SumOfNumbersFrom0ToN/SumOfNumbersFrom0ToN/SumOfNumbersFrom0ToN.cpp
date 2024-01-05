/*
Description:
We want to generate a function that computes the series starting from 0 and ending until the given number.

Example:
Input:
> 6
Output:
0+1+2+3+4+5+6 = 21

Input:
> -15
Output:
-15<0
Input:
> 0
Output:
0=0
*/
#include <iostream>
#include <string>

class SequenceSum {
    int count;
public:
    SequenceSum(int c) : count(c) {}
    std::string showSequence() {
        std::string result{};
        if (count == 0)return "0=0";
        else if (count < 0) return std::to_string(count) + "<0";
        int sum = 0;
        for (int i = 0; i <= count; ++i) {
            result += (std::to_string(i) + "+");
            sum += i;
        }
        result.resize(result.size() - 1);
        result += (" = " + std::to_string(sum));

        return result;
    }
};

int main()
{
    std::cout << std::boolalpha;

    SequenceSum seqsum(6);
    std::cout << (seqsum.showSequence() == "0+1+2+3+4+5+6 = 21") << "\n";

    return 0;
}
