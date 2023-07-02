/*
In this kata you should simply determine, whether a given year is a leap year or not. In case you don't know the rules, here they are:

years divisible by 4 are leap years
but years divisible by 100 are not leap years
but years divisible by 400 are leap years
Additional Notes:

Only valid years (positive integers) will be tested, so you don't have to validate them
Examples can be found in the test fixture.
*/

#include <iostream>
bool IsLeapYear(int year){
    return year % 4 == 0 && (year % 100 != 0  || year % 400 == 0)? true : false;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (IsLeapYear(2020) == true) << "\n";
    std::cout << (IsLeapYear(2000) == true) << "\n";
    std::cout << (IsLeapYear(2015) == false) << "\n";
    std::cout << (IsLeapYear(2100) == false) << "\n";

    return 0;
}
