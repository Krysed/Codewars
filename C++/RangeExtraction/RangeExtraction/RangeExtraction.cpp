#include <iostream>
#include <vector>
#include <string>

std::string range_extraction(std::vector<int> args) {
    
    std::string sum = "";
    int i = 0;
    while (i < args.size()) {
        int j = i + 1;

        while (j < args.size() && args[j] == args[j - 1] + 1) {
            j++;
        }
        if (j - i >= 3) {
            if (!sum.empty()) sum += ",";
            sum += std::to_string(args[i]) + "-" + std::to_string(args[j - 1]);
        }
        else {
            for (int k = i; k < j; k++) {
                if (!sum.empty()) sum += ",";
                sum += std::to_string(args[k]);
            }
        }

        i = j;
    }
    std::cout << sum << '\n';
    return sum;
}

bool Equals(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << Equals(range_extraction({ -6,-3,-2,-1,0,1,3,4,5,7,8,9,10,11,14,15,17,18,19,20 }), "-6,-3-1,3-5,7-11,14,15,17-20") << '\n';
    std::cout << Equals(range_extraction({ -3,-2,-1,2,10,15,16,18,19,20 }), "-3--1,2,10,15,16,18-20") << '\n';

    return 0;
}
