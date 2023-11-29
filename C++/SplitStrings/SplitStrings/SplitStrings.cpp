/*
Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

Examples:

* 'abc' =>  ['ab', 'c_']
* 'abcdef' => ['ab', 'cd', 'ef']
*/
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string& s)
{
	std::vector<std::string> result;
	std::string pair = "";
	for (size_t i = 0; i < s.length(); ++i)
	{
		if (i % 2 == 0)pair += s[i];
		else {
			pair += s[i];
			result.push_back(pair);
			pair.clear();
		}
	}
	if (s.length() % 2 == 1) {
		pair += '_';
		result.push_back(pair);
	}
	return result;
}

int main()
{
	std::cout << std::boolalpha;

	std::cout << (solution("abcdef") == std::vector<std::string>{"ab", "cd", "ef"}) << "\n";
	std::cout << (solution("HelloWorld") == std::vector<std::string>{"He", "ll", "oW", "or", "ld"}) << "\n";
	std::cout << (solution("abcde") == std::vector<std::string>{"ab", "cd", "e_"}) << "\n";
	std::cout << (solution("LovePizza") == std::vector<std::string>{"Lo", "ve", "Pi", "zz", "a_"}) << "\n";

	return 0;
}
