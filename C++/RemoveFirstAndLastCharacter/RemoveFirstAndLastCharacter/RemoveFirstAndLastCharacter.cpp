#include <iostream>
#include <string>

using namespace std;

string sliceString(string str)
{
    return str.erase(0, 1).erase(str.length()-2, 1);
}

bool equal(string a, string b) {
    return a == b;
}

int main()
{
    cout << std::boolalpha;

    std::cout << equal(sliceString("tuna"), "un") << "\n";
    std::cout << equal(sliceString("rats"), "at") << "\n";
    std::cout << equal(sliceString("country"), "ountr") << "\n";
    std::cout << equal(sliceString("place"), "lac") << "\n";
    std::cout << equal(sliceString("translation"), "ranslatio") << "\n";

}