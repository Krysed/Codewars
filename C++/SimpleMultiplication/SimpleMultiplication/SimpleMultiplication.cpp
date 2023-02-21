//This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

#include <iostream>

int simpleMultiplication(int a) {
	return(a % 2) ? a *= 9 : a *= 8;
}
bool equals(int a, int b) {
	return a == b;
}

int main()
{
	std::cout << std::boolalpha;
	//test cases
	std::cout << equals(simpleMultiplication(2), 16) << '\n';
	std::cout << equals(simpleMultiplication(1), 9) << '\n';
	std::cout << equals(simpleMultiplication(8), 64) << '\n';
	std::cout << equals(simpleMultiplication(4), 32) << '\n';
	std::cout << equals(simpleMultiplication(5), 45) << '\n';

	return 0;
}
