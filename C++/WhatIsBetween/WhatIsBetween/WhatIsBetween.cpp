#include <iostream>
#include <numeric>
#include <vector>

std::vector<int> between(int start, int end) {
	std::vector<int>vec(end - start + 1);
	std::iota(std::begin(vec), std::end(vec), start);
	return vec;
}

bool equals(std::vector<int> vec, std::vector<int> result) {
	return vec == result;
}

int main()
{
	std::cout << std::boolalpha;
	
	//test cases
	std::cout << equals(between(1, 4), { 1, 2, 3, 4 }) << '\n';
	std::cout << equals(between(-2, 2), { -2, -1, 0, 1, 2 }) << '\n';
	std::cout << equals(between(-1, 10), { -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << '\n';
	std::cout << equals(between(0, 1), { 0, 1 }) << '\n';
	std::cout << equals(between(-1, 0), { -1, 0 }) << '\n';
	std::cout << equals(between(0, 0), { 0 }) << '\n';
	std::cout << equals(between(5, 5), { 5 }) << '\n';

	return 0;
}
