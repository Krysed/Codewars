#include <iostream>

class Accumul
{
public:
    static std::string accum(const std::string& s);
};
bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    Accumul acc;
    std::cout << std::boolalpha;

    std::cout << equal(acc.accum("ZpglnRxqenU"), "Z-Pp-Ggg-Llll-Nnnnn-Rrrrrr-Xxxxxxx-Qqqqqqqq-Eeeeeeeee-Nnnnnnnnnn-Uuuuuuuuuuu") << "\n";
    std::cout << equal(acc.accum("NyffsGeyylB"), "N-Yy-Fff-Ffff-Sssss-Gggggg-Eeeeeee-Yyyyyyyy-Yyyyyyyyy-Llllllllll-Bbbbbbbbbbb") << "\n";

    return 0;
}


std::string Accumul::accum(const std::string& s) {
    std::string str = "";
    for (int i = 0; i < s.length(); ++i)
    {
        for (int j = 0; j < i+1; ++j) 
        {
            if (j == 0)str += toupper(s[i]);
            else str += tolower(s[i]);
        }
        if (i != s.length() - 1) str += "-";
    }
    return str;
}