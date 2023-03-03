#include <iostream>

std::string get_middle(std::string input)
{
	std::string tmp = "";
	return((size(input) % 2)==0) ? tmp + input[size(input) / 2-1] + input[size(input) / 2] : tmp + input[size(input) / 2];
}

bool equal(std::string a, std::string b) {
	return a == b;
}

int main()
{
	std::cout << std::boolalpha;

	std::cout << equal(get_middle("test"), "es") << "\n";
	std::cout << equal(get_middle("testing"), "t") << "\n";

	return 0;
}
