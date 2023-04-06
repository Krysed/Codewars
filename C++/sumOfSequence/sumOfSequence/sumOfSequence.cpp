/*
Your task is to write a function which returns the sum of a sequence of integers.

The sequence is defined by 3 non-negative values: begin, end, step.

If begin value is greater than the end, your function should return 0. If end is not the result of an integer number of steps, then don't add it to the sum. See the 4th example below.

Examples

2,2,2 --> 2
2,6,2 --> 12 (2 + 4 + 6)
1,5,1 --> 15 (1 + 2 + 3 + 4 + 5)
1,5,3  --> 5 (1 + 4)
This is the first kata in the series:

Sum of a sequence (this kata)
Sum of a Sequence [Hard-Core Version]
*/
#include <iostream>
int sequenceSum(int start, int end, int step)
{
    if (start > end)return 0; 
    int sum = 0;
    for (int i = start; i <= end; i+=step)
    {
        sum += i;
    }
    return sum;
}

bool equal(int a, int b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(sequenceSum(2,6,2), 12) << "\n";
    std::cout << equal(sequenceSum(1,5,1), 15) << "\n";
    std::cout << equal(sequenceSum(1,5,3), 5) << "\n";
    std::cout << equal(sequenceSum(0,15,3), 45) << "\n";
    std::cout << equal(sequenceSum(16,15,3), 0) << "\n";
    std::cout << equal(sequenceSum(2,24,22), 26) << "\n";
    std::cout << equal(sequenceSum(2,2,2), 2) << "\n";
    std::cout << equal(sequenceSum(2,2,1), 2) << "\n";
    std::cout << equal(sequenceSum(1,15,3), 35) << "\n";
    std::cout << equal(sequenceSum(15,1,3), 0) << "\n";

    return 0;
}
