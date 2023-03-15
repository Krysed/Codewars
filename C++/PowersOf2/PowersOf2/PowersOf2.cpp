/*
Complete the function that takes a non-negative integer n as input, and returns a list of all the powers of 2 with the exponent ranging from 0 to n ( inclusive ).
Examples
n = 0  ==> [1]        # [2^0]
n = 1  ==> [1, 2]     # [2^0, 2^1]
n = 2  ==> [1, 2, 4]  # [2^0, 2^1, 2^2]
*/
#include <iostream>
#include <vector>
#include <cstdint>

std::vector<uint64_t> powers_of_two(int n) {
	std::vector<uint64_t> vec;
	for (int i = 0; i < n+1; i++) { vec.push_back(pow(2, i)); }
	return vec;
}

bool equal(std::vector<uint64_t> a, std::vector<uint64_t> b) {
	return a == b;
}

int main()
{
	std::cout << std::boolalpha;

	std::cout << equal(powers_of_two(0), { 1 }) << "\n";
	std::cout << equal(powers_of_two(2), { 1,2,4 }) << "\n";

	return 0;
}
