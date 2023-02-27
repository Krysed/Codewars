#include <iostream>
#include <string>

std::string createPhoneNumber(const int arr[10]) {
    std::string number = "(";
    for (int i = 0; i < 10; ++i) {
        if (i < 3) {
            number += std::to_string(arr[i]);
            if (i == 2)number += ") ";
        }
        else if (i < 10) {
            number += std::to_string(arr[i]);
            if (i == 5)number += "-";
        }
    }
    return number;
}
bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{

    std::cout << std::boolalpha;
    int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    std::cout << equal(createPhoneNumber(arr), "(123) 456-7890") << "\n";
    int arr2[10]{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    std::cout << equal(createPhoneNumber(arr2), "(111) 111-1111") << "\n";
    int arr3[10]{ 1, 2, 3, 4, 5, 6, 8, 8, 0, 0 };
    std::cout << equal(createPhoneNumber(arr3), "(123) 456-8800") << "\n";
    int arr4[10]{ 0, 2, 3, 0, 5, 6, 0, 8, 9, 0 };
    std::cout << equal(createPhoneNumber(arr4), "(023) 056-0890") << "\n";
    int arr5[10]{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    std::cout << equal(createPhoneNumber(arr5), "(000) 000-0000") << "\n";

    return 0;
}
