/*
A hero is on his way to the castle to complete his mission. However, he's been told that the castle is surrounded with a couple of powerful dragons! each dragon takes 2 bullets to be defeated, our hero has no idea how many bullets he should carry.. Assuming he's gonna grab a specific given number of bullets and move forward to fight another specific given number of dragons, will he survive?

Return true if yes, false otherwise :)
*/
#include <iostream>
bool hero(int bullets, int dragons) {
    return bullets/2 >= dragons;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (hero(10, 5) == true)<< "\n";
    std::cout << (hero(7, 4) == false)<< "\n";
    std::cout << (hero(4, 5) == false)<< "\n";
    std::cout << (hero(100, 40) == true)<< "\n";
    std::cout << (hero(1500, 751) == false)<< "\n";
    std::cout << (hero(0, 1) == false)<< "\n";

    return 0;
}
