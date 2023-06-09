/*
Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string, the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

Examples:
a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) -> "abcdefklmopqwxy"

a = "abcdefghijklmnopqrstuvwxyz"
longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"
*/
#include <algorithm>
#include <iostream>

class TwoToOne
{
public:
    static std::string longest(const std::string& s1, const std::string& s2)
    {
        std::string tmp = s1 + s2;
        std::sort(begin(tmp), end(tmp));
        tmp.erase(std::unique(begin(tmp), end(tmp)), end(tmp));
        return tmp;
    }
};

int main()
{
    std::cout << std::boolalpha;

    std::cout << (TwoToOne::longest("aretheyhere", "yestheyarehere") == "aehrsty") << "\n";
    std::cout << (TwoToOne::longest("loopingisfunbutdangerous", "lessdangerousthancoding") == "abcdefghilnoprstu") << "\n";

    return 0;
}
