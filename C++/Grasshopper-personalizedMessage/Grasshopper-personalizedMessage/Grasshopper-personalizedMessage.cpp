#include <iostream>
#include <string>

std::string greet(const std::string& name, const std::string& owner) {
    return name == owner ? "Hello boss" : "Hello guest";
}

bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(greet("Daniel", "Daniel"), "Hello boss") << "\n";
    std::cout << equal(greet("Greg", "Daniel"), "Hello guest") << "\n";

    return 0;
}
