#include <algorithm>
#include <iostream>
#include <vector>

int positive_sum(const std::vector<int> arr) {
    int tmp = 0;
    std::for_each(begin(arr), end(arr), [&tmp](int i) {return(i > 0) ? tmp += i : tmp; });
    return tmp;
}

bool equal(int a, int b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(positive_sum({ 1,2,3,4,5 }), 15) << "\n";
    std::cout << equal(positive_sum({ 1,-2,3,4,5 }), 13) << "\n";
    std::cout << equal(positive_sum({ -1,2,3,4,-5 }), 9) << "\n";
    std::cout << equal(positive_sum({}), 0) << "\n";

    return 0;
}
