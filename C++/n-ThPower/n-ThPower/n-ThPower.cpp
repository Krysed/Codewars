/*
This kata is from check py.checkio.org

You are given an array with positive numbers and a non-negative number N. You should find the N-th power of the element in the array with the index N. If N is outside of the array, then return -1. Don't forget that the first element has the index 0.

Let's look at a few examples:

array = [1, 2, 3, 4] and N = 2, then the result is 3^2 == 9;
array = [1, 2, 3] and N = 3, but N is outside of the array, so the result is -1.

*/
#include <iostream>
#include <vector>

int index(const std::vector<int>& vector, int n) {
    return vector.size() <= n ? -1 : std::pow(vector[n], n);
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (index({ 1,2,3,4 },2) == 9) << "\n";
    std::cout << (index({ 5,1,3,3 },3) == 27) << "\n";
    std::cout << (index({ 1 },0) == 1) << "\n";
    std::cout << (index({ 1,1,1,1,1,1,1,1,1,1 },9) == 1) << "\n";
    std::cout << (index({ 1,1,1,1,1,1,1,1,1,2 },9) == 512) << "\n";
    std::cout << (index({ 29,82,45,10 },3) == 1000) << "\n";

    return 0;
}
