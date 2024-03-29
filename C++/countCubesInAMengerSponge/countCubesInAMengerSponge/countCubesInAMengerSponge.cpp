/*
A method of constructing a Menger Sponge can be visualized as follows:

Start from a cube (first part of image).
Scale down the cube so that side length is 1/3 of its original, and make 20 copies of it.
Place the copies so that they measure the same size as the original cube but without its central parts (next part of image)
Repeat the process from step 2 for the new smaller cubes from the previous step.
In each iteration (e.g. repeating the last three steps), the effect will be that parts of the cube will be removed, they'll never be added. Menger sponge will always consist of parts will never be removed, regardless of how many iterations you do.
An alternative explanation:

Start from a cube (first part of image).
Devide each cube into 27 equal sized cubes.
Remove the middle-cube and the six cubes on each side of the group of 27 cubes (second part of image).
Repeat the process from step 2 for the smaller cubes (third and fourth part of image).
Task
In this kata you will create a function that takes non negative integers (from 0 to n) and return the amount of cubes that the Menger Sponge would have in that specific iteration.

Example
For n = 0, the ouptut should be 1;
For n = 1, the output should be 20;
For n = 2, the output should be 400;
For n = 3, the output should be 8000;
for n = 4, the output should be 160000;
For n = 5, the output should be 3200000;
For n = 6, the output should be 64000000.
Happy coding!
*/

#include <iostream>
#include <cmath>
uint64_t calc_ms(unsigned n) {
    return std::pow(20, n);
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (calc_ms(0) == 1) << "\n";
    std::cout << (calc_ms(1) == 20) << "\n";
    std::cout << (calc_ms(2) == 400) << "\n";
    std::cout << (calc_ms(3) == 8000) << "\n";
    std::cout << (calc_ms(7) == 1280000000) << "\n";
    std::cout << (calc_ms(14) == 1638400000000000000) << "\n";
    return 0;
}
