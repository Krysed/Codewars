/*
You are given 2 two-digit numbers. You should check if they are similar by comparing their numbers, and return the result in %.

Example:

compare(13,14)=50%;
compare(23,22)=50%;
compare(15,51)=100%;
compare(12,34)=0%.

*/
#include <iostream>
#include <string>
#include <map>

std::string compare(unsigned short a, unsigned short b) {
    std::string first = std::to_string(a);
    std::string second = std::to_string(b);
    std::map<char, int> firstMap, secondMap;
    for (int i = 0; i < first.length(); ++i)
    {
        firstMap[first[i]]++;
        secondMap[second[i]]++;
    }
    int similarityCount = 0;
    for (auto& pair : firstMap) {
        if (secondMap.find(pair.first) != secondMap.end()) {
            similarityCount += std::min(pair.second, secondMap[pair.first]);
        }
    }
    int similarityPercentage = (similarityCount * 100) / first.length();

    return std::to_string(similarityPercentage) + "%";
}

bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(compare(13, 14), "50%") << "\n";
    std::cout << equal(compare(23, 22), "50%") << "\n";
    std::cout << equal(compare(15, 51), "100%") << "\n";

    return 0;
}
