/*
altERnaTIng cAsE <=> ALTerNAtiNG CaSe
Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. For example:

"hello world".toAlternatingCase() === "HELLO WORLD"
"HELLO WORLD".toAlternatingCase() === "hello world"
"hello WORLD".toAlternatingCase() === "HELLO world"
"HeLLo WoRLD".toAlternatingCase() === "hEllO wOrld"
"12345".toAlternatingCase()       === "12345"                   // Non-alphabetical characters are unaffected
"1a2b3c4d5e".toAlternatingCase()  === "1A2B3C4D5E"
"String.prototype.toAlternatingCase".toAlternatingCase() === "sTRING.PROTOTYPE.TOaLTERNATINGcASE"
*/
#include <iostream>
#include <string>
std::string to_alternating_case(const std::string& str)
{
	std::string tmp = "";
	for (char c : str) islower(c) ? tmp+=toupper(c) : tmp +=tolower(c);
	return tmp;
}
bool equal(std::string a, std::string b) {
	return a == b;
}
int main()
{
    std::cout << std::boolalpha;

	std::cout << equal(to_alternating_case("hello world"), "HELLO WORLD") << "\n";
	std::cout << equal(to_alternating_case("HELLO WORLD"), "hello world") << "\n";
	std::cout << equal(to_alternating_case("hello WORLD"), "HELLO world") << "\n";
	std::cout << equal(to_alternating_case("String.prototype.toAlternatingCase"), "sTRING.PROTOTYPE.TOaLTERNATINGcASE") << "\n";
	std::cout << equal(to_alternating_case("altERnaTIng cAsE <=> ALTerNAtiNG CaSe"), "ALTerNAtiNG CaSe <=> altERnaTIng cAsE") << "\n";

	return 0;
}