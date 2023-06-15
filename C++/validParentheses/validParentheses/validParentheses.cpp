/*
Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. The function should return true if the string is valid, and false if it's invalid.

Examples
"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true
Constraints
0 <= length of input <= 100

All inputs will be strings, consisting only of characters ( and ).
Empty strings are considered balanced (and therefore valid), and will be tested.
For languages with mutable strings, the inputs should not be mutated.

Protip: If you are trying to figure out why a string of parentheses is invalid, paste the parentheses into the code editor, and let the code highlighting show you!
*/
#include <iostream>
#include <string>
#include <stack>

bool validParentheses(const std::string& str) {
    std::stack<char> result;

    for (char c : str) {
        if (c == '(') {
            result.push(c);
        }
        else if (c == ')') {
            if (result.empty() || result.top() != '(') {
                return false;
            }
            result.pop();
        }
    }

    return result.empty();
}
int main()
{
    std::cout << std::boolalpha;


    std::cout << (validParentheses("") == true) << "\n";
    std::cout << (validParentheses("()") == true) << "\n";
    std::cout << (validParentheses("((()))") == true) << "\n";
    std::cout << (validParentheses("()()()") == true) << "\n";
    std::cout << (validParentheses("(()())()") == true) << "\n";
    std::cout << (validParentheses("()(())((()))(())()") == true) << "\n";

    std::cout << (validParentheses(")(") == false) << "\n";
    std::cout << (validParentheses("()()(") == false) << "\n";
    std::cout << (validParentheses("((())") == false) << "\n";
    std::cout << (validParentheses("())(()") == false) << "\n";
    std::cout << (validParentheses(")()") == false) << "\n";
    std::cout << (validParentheses(")") == false) << "\n";

    return 0;
}
