#include <iostream>
#include <numeric>
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
	int sum = std::accumulate(begin(classPoints), end(classPoints), 0);
	return sum / classPoints.size() < yourPoints;
}

bool equal(bool a, bool b) {
	return a == b;
}

int main()
{
	std::cout << std::boolalpha;

	std::cout << equal(betterThanAverage({ 2, 3 }, 5), true) << "\n";
	std::cout << equal(betterThanAverage({ 100, 40, 34, 57, 29, 72, 57, 88 }, 75), true) << "\n";
	std::cout << equal(betterThanAverage({ 12, 23, 34, 45, 56, 67, 78, 89, 90 }, 69), true) << "\n";
	std::cout << equal(betterThanAverage({ 41, 75, 72, 56, 80, 82, 81, 33 }, 50), false) << "\n";
	std::cout << equal(betterThanAverage({ 29, 55, 74, 60, 11, 90, 67, 28 }, 21), false) << "\n";

	return 0;
}
