/*
Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.
Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case
*/
#include <iostream>

unsigned int countBits(unsigned long long n){
	unsigned int count = 0;

	while (n) {
		if (n % 2 == 1)count ++;
		n /= 2;
	}
	return count;
}

bool equal(unsigned int a, unsigned int b) {
	return a == b;
}

int main()
{
	std::cout << std::boolalpha;

	std::cout << equal(countBits(0), 0) << "\n";
	std::cout << equal(countBits(4), 1) << "\n";
	std::cout << equal(countBits(7), 3) << "\n";
	std::cout << equal(countBits(9), 2) << "\n";
	std::cout << equal(countBits(10), 2) << "\n";
	std::cout << equal(countBits(26), 3) << "\n";
	std::cout << equal(countBits(77231418), 14) << "\n";
	std::cout << equal(countBits(12525589), 11) << "\n";
	std::cout << equal(countBits(3811), 8) << "\n";
	std::cout << equal(countBits(392902058), 17) << "\n";

	return 0;
}
