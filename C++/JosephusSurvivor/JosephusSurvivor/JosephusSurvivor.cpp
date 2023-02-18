#include <iostream>
#include <vector>
#include <numeric>


int josephusSurvivor(int n, int k) {
	std::vector<int> numbers(n);
	std::iota(numbers.begin(), numbers.end(), 1);

	int num = 0;
	while (numbers.size() > 1) {
		num = (k-1 + num) % numbers.size();
		for (int j = num; j < numbers.size()-1; ++j) {
			std::swap(numbers[j], numbers[j + 1]);
		}		
		numbers.pop_back();
	}
	return numbers[0];
}

bool Equals(int a,int b) {
	return a == b;
}
int main()
{
	std::cout << std::boolalpha;

	std::cout << Equals(josephusSurvivor(7, 3),4 )<< '\n';
	std::cout << Equals(josephusSurvivor(11, 19),10) << '\n';
	std::cout << Equals(josephusSurvivor(1, 300),1) << '\n';
	std::cout << Equals(josephusSurvivor(14, 2),13) << '\n';
	std::cout << Equals(josephusSurvivor(100, 1),100) << '\n';
	std::cout << Equals(josephusSurvivor(40, 3),28) << '\n';
	std::cout << Equals(josephusSurvivor(2, 300),1) << '\n';
	std::cout << Equals(josephusSurvivor(5, 300),1) << '\n';
	std::cout << Equals(josephusSurvivor(7, 300),7) << '\n';
	std::cout << Equals(josephusSurvivor(300, 300),265) << '\n';


	return 0;
}
