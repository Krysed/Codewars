#include <iostream>

int solution(int number)
{
	int sum = 0;
	for (int i = 1; i < number; ++i)
		if ((i % 3 == 0) || (i % 5 == 0))sum += i;
	return sum;
}
bool equals(int a, int b) {
	return a == b;
}

int main()
{
	std::cout << std::boolalpha;


	std::cout << equals(solution(10), 23) << '\n';
	std::cout << equals(solution(23), 119) << '\n';
	std::cout << equals(solution(55), 698) << '\n';
	return 0;
}