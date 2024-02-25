/*
Your task is to construct a building which will be a pile of n cubes. The cube at the bottom will have a volume of
n^3 , the cube above will have volume of (n−1)^3 and so on until the top which will have a volume of 1^3

You are given the total volume m of the building. Being given m can you find the number n of cubes you will have to build?
The parameter of the function findNb (find_nb, find-nb, findNb, ...) will be an integer m and you have to return the integer n such as
n^3 + (n−1)^3 + (n−2)^3 + ... + 1^3
 =m if such a n exists or -1 if there is no such n.

Examples:
findNb(1071225) --> 45

findNb(91716553919377) --> -1
*/

#include <iostream>

#include <cmath>

class ASum
{
public:
    static long long findNb(long long m)
    {
        long long numOfCubes = 1, sum = 1;

        while (sum < m) {
            numOfCubes++;
            sum += (numOfCubes * numOfCubes * numOfCubes);
        }
        if (sum == m) {
            return numOfCubes;
        }
        else {
            return -1;
        }
    }
};

int main()
{
    std::cout << std::boolalpha;

    ASum sum;
    std::cout << (sum.findNb(4183059834009) == 2022) << "\n";
    std::cout << (sum.findNb(24723578342962) == -1) << "\n";
    std::cout << (sum.findNb(135440716410000) == 4824) << "\n";
    std::cout << (sum.findNb(40539911473216) == 3568) << "\n";
    std::cout << (sum.findNb(26825883955641) == 3218) << "\n";

    return 0;
}
