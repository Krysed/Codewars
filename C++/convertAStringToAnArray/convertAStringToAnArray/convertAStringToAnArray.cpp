/*
Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
*/
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
    if (s.empty())return { "" };
    std::vector<std::string> vec;
    std::string tmp = "";
    for (char c : s) {
        if (c == ' ') {
            vec.push_back(tmp);
            tmp = "";
        }
        else tmp += c;
    }
    if (!tmp.empty()) vec.push_back(tmp);
    return vec;
}
template<typename T>
bool equal(T a, T b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(string_to_array("some value"), { "some", "value" }) << "\n";
    std::cout << equal(string_to_array("Robin Singh"), { "Robin", "Singh" }) << "\n";
    std::cout << equal(string_to_array("Codewars"), { "Codewars" }) << "\n";
    std::cout << equal(string_to_array("I love arrays"), { "I", "love", "arrays" }) << "\n";
    std::cout << equal(string_to_array("1 2 3"), { "1", "2", "3" }) << "\n";
    std::cout << equal(string_to_array(""), { "" }) << "\n";

    return 0;
}
