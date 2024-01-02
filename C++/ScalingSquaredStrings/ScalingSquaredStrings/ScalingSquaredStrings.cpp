/*
You are given a string of n lines, each substring being n characters long. For example:

s = "abcd\nefgh\nijkl\nmnop"

We will study the "horizontal" and the "vertical" scaling of this square of strings.

A k-horizontal scaling of a string consists of replicating k times each character of the string (except '\n').

Example: 2-horizontal scaling of s: => "aabbccdd\neeffgghh\niijjkkll\nmmnnoopp"
A v-vertical scaling of a string consists of replicating v times each part of the squared string.

Example: 2-vertical scaling of s: => "abcd\nabcd\nefgh\nefgh\nijkl\nijkl\nmnop\nmnop"
Function scale(strng, k, v) will perform a k-horizontal scaling and a v-vertical scaling.

Example: a = "abcd\nefgh\nijkl\nmnop"
scale(a, 2, 3) --> "aabbccdd\naabbccdd\naabbccdd\neeffgghh\neeffgghh\neeffgghh\niijjkkll\niijjkkll\niijjkkll\nmmnnoopp\nmmnnoopp\nmmnnoopp"
Printed:

abcd   ----->   aabbccdd
efgh            aabbccdd
ijkl            aabbccdd
mnop            eeffgghh
                eeffgghh
                eeffgghh
                iijjkkll
                iijjkkll
                iijjkkll
                mmnnoopp
                mmnnoopp
                mmnnoopp
Task:
Write function scale(strng, k, v) k and v will be positive integers. If strng == "" return "".
*/
#include <iostream>
#include <vector>

class ScalingSqStrings
{
public:
    static std::string scale(const std::string& strng, int k, int n)
    {
        if (strng.empty()) return "";
        std::vector<std::string> stringsVec {};
        std::string word {};

        for (size_t i = 0; i < strng.length(); ++i) {
            if (strng[i] == '\n') {
                stringsVec.push_back(word);
                word = "";
            }
            else {
                word += strng[i];
            }
        }
        stringsVec.push_back(word);
        word = "";
        std::string result{};
        for (std::string str : stringsVec) {
            for (size_t i = 0; i < str.length(); ++i) {
                for (size_t j = 0; j < k; ++j) {
                   word += str[i];
                }
            }
            for (size_t i = 0; i < n; ++i) {
                result += word;
                result += '\n';
            }
            word = "";
        }

        result.pop_back();
        return result;
    }
};

int main()
{
    std::cout << std::boolalpha;

    std::cout << (ScalingSqStrings::scale("abcd\nefgh\nijkl\nmnop",2,3) == "aabbccdd\naabbccdd\naabbccdd\neeffgghh\neeffgghh\neeffgghh\niijjkkll\niijjkkll\niijjkkll\nmmnnoopp\nmmnnoopp\nmmnnoopp") << "\n";
    std::cout << (ScalingSqStrings::scale("",5,5) == "") << "\n";
    std::cout << (ScalingSqStrings::scale("Kj\nSH", 1, 2) == "Kj\nKj\nSH\nSH") << "\n";

    return 0;
}
