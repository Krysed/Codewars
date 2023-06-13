/*
Oh no!
Some really funny web dev gave you a sequence of numbers from his API response as an sequence of strings!

You need to cast the whole array to the correct type.

Create the function that takes as a parameter a sequence of numbers represented as strings and outputs a sequence of numbers.

ie:["1", "2", "3"] to [1, 2, 3]

Note that you can receive floats as well.
*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

std::vector<float> to_float_array(const std::vector<std::string>& arr) {
    std::vector<float> result;
    std::for_each(begin(arr), end(arr), [&result](std::string val) { result.push_back(std::stof(val)); });
    return result;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (to_float_array({ "1.1", "2.2", "3.3" }) == std::vector<float>{1.1, 2.2, 3.3}) << "\n";
    std::cout << (to_float_array({ "1", "2", "3" }) == std::vector<float>{1, 2, 3}) << "\n";
    std::cout << (to_float_array({ "1.1", "2", "3.35" }) == std::vector<float>{1.1, 2, 3.35}) << "\n";
    std::cout << (to_float_array({ "1.111" }) == std::vector<float>{1.111}) << "\n";
    std::cout << (to_float_array({"356"}) == std::vector<float>{356}) << "\n";
    std::cout << (to_float_array({"0"}) == std::vector<float>{0}) << "\n";
    std::cout << (to_float_array({}) == std::vector<float>{}) << "\n";

    return 0;
}
