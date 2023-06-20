/*
You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

Array can contain numbers or strings. X can be either.

Return true if the array contains the value, false if not.
*/

#include <iostream>
#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
	for (auto str : seq) {
		if (str == elem)return true;
	}
	return false;
}
int main()
{
    std::cout << std::boolalpha;

	std::cout << (check({}, "a") == false) << "\n";
	std::cout << (check({ "a", "b", "c" }, "b") == true) << "\n";
	std::cout << (check({ "a", "b", "c" }, "e") == false) << "\n";

    return 0;
}
