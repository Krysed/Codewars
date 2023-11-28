/*
Can you find the needle in the haystack?

Write a function findNeedle() that takes an array full of junk but containing one "needle"

After your function finds the needle it should return a message (as a string) that says:

"found the needle at position " plus the index it found the needle, so:

Example(Input --> Output)

["hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"] --> "found the needle at position 5"
Note: In COBOL, it should return "found the needle at position 6"
*/

#include <iostream>
#include <vector>
#include <string>

std::string findNeedle(const std::vector<std::string>& haystack)
{
	for (int i = 0; i < haystack.size(); ++i) {
		if (haystack[i] == "needle") return  "found the needle at position " + std::to_string(i);
	}
	return "";
}

int main()
{
	std::cout << std::boolalpha;

	std::cout << (findNeedle({ "hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk" }) == "found the needle at position 5") << "\n";
	return 0;
}
