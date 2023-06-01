/*
Let us consider this example (array written in general format):

ls = [0, 1, 3, 6, 10]

Its following parts:

ls = [0, 1, 3, 6, 10]
ls = [1, 3, 6, 10]
ls = [3, 6, 10]
ls = [6, 10]
ls = [10]
ls = []
The corresponding sums are (put together in a list): [20, 20, 19, 16, 10, 0]

The function parts_sums (or its variants in other languages) will take as parameter a list ls and return a list of the sums of its parts as defined above.

Other Examples:
ls = [1, 2, 3, 4, 5, 6]
parts_sums(ls) -> [21, 20, 18, 15, 11, 6, 0]

ls = [744125, 935, 407, 454, 430, 90, 144, 6710213, 889, 810, 2579358]
parts_sums(ls) -> [10037855, 9293730, 9292795, 9292388, 9291934, 9291504, 9291414, 9291270, 2581057, 2580168, 2579358, 0]
*/
#include <iostream>
#include <numeric>
#include <vector>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls) {
    std::vector<unsigned long long> partSum(ls.size()+1);
    unsigned long long val = 0;
    for (int i = ls.size()-1; i >= 0; --i) {
        val += ls[i];
        partSum[i] = val;
    }
    return partSum;
}
int main()
{
    std::cout << std::boolalpha;


    std::cout << (partsSum({ 0, 1, 3, 6, 10 }) == std::vector<unsigned long long>{20, 20, 19, 16, 10, 0}) << "\n";
    std::cout << (partsSum({ 1, 2, 3, 4, 5, 6 }) == std::vector<unsigned long long>{21, 20, 18, 15, 11, 6, 0}) << "\n";
    std::cout << (partsSum({ 744125, 935, 407, 454, 430, 90, 144, 6710213, 889, 810, 2579358 }) == std::vector<unsigned long long>{10037855, 9293730, 9292795, 9292388, 9291934, 9291504, 9291414, 9291270, 2581057, 2580168, 2579358, 0}) << "\n";
    std::cout << (partsSum({ 30350, 76431, 156228, 78043, 98977, 80169, 32457, 182875, 162323, 17508, 57971, 171907 }) == std::vector<unsigned long long>{1145239, 1114889, 1038458, 882230, 804187, 705210, 625041, 592584, 409709, 247386, 229878, 171907, 0}) << "\n";
    std::cout << (partsSum({ 158077, 143494, 196531, 26272, 35656, 68756, 109861, 36958, 83895, 134127, 81618, 193758, 143422 }) == std::vector<unsigned long long>{1412425, 1254348, 1110854, 914323, 888051, 852395, 783639, 673778, 636820, 552925, 418798, 337180, 143422, 0}) << "\n";

    return 0;
}
