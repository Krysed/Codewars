#include <iostream>
#include <vector>
#include <string>


class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
        for (int i = 0; i < array.size()-1; ++i) {
            bool flag = false;

            for (int j = 0; j < array.size() - 1-i; ++j) {
                if (array[j].size() > array[j + 1].size()) {
                    std::swap(array[j], array[j + 1]);
                    flag = true;
                }
            }
            if (flag)return array;
        }
        return array;
    }
};

int main()
{
    Kata kata;
    std::vector<std::string> sort = kata.sortByLength({ "Beg", "Life", "I", "To" });
    std::vector<std::string> sort2 = kata.sortByLength({ "Longer", "Longest", "Short" });
    std::vector<std::string> sort3 = kata.sortByLength({ "", "Moderately", "Brains", "Pizza" });
    return 0;
}

