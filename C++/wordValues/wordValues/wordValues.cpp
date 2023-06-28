/*
Given a string "abc" and assuming that each letter in the string has a value equal to its position in the alphabet, our string will have a value of 1 + 2 + 3 = 6. This means that: a = 1, b = 2, c = 3 ....z = 26.

You will be given a list of strings and your task will be to return the values of the strings as explained above multiplied by the position of that string in the list. For our purpose, position begins with 1.

nameValue ["abc","abc abc"] should return [6,24] because of [ 6 * 1, 12 * 2 ]. Note how spaces are ignored.

"abc" has a value of 6, while "abc abc" has a value of 12. Now, the value at position 1 is multiplied by 1 while the value at position 2 is multiplied by 2.

Input will only contain lowercase characters and spaces.

Good luck!

If you like this Kata, please try:

String matchup

Consonant value
*/

#include <iostream>
#include <vector>

std::vector<int> wordValue(std::vector <std::string> arr) {
	std::vector<int> result{};
	std::string values = "abcdefghijklmnopqrstuvwxyz";
	int value = 0;
	for (int i = 0; i < arr.size(); ++i) {
		value = 0;
		for (int j = 0; j < arr[i].length(); ++j) {
			if (arr[i][j] == ' ')continue;
			value += *std::find(begin(values), end(values), arr[i][j]) - 'a' + 1;
		}
		result.push_back(value*(i+1));
	}
	return result;
}
int main()
{
    std::cout << std::boolalpha;

	std::cout << (wordValue(std::vector <std::string>({ "abc","abc abc" })) == std::vector<int>({ 6,24 })) << "\n";
	std::cout << (wordValue(std::vector <std::string>({ "codewars","abc","xyz" })) == std::vector<int>({ 88,12,225 })) << "\n";
	std::cout << (wordValue(std::vector <std::string>({ "codewars" })) == std::vector<int>({ 88 })) << "\n";
	std::cout << (wordValue(std::vector <std::string>({ "abcdefghijklmnopqrstuvwxyz","stamford bridge","haskellers" })) == std::vector<int>({ 351,282,330 })) << "\n";

	return 0;
}
