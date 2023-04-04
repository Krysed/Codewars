/*
My grandfather always predicted how old people would get, and right before he passed away he revealed his secret!

In honor of my grandfather's memory we will write a function using his formula!

Take a list of ages when each of your great-grandparent died.
Multiply each number by itself.
Add them all together.
Take the square root of the result.
Divide by two.
Example
predictAge(65, 60, 75, 55, 60, 63, 64, 45) === 86
Note: the result should be rounded down to the nearest integer.

Some random tests might fail due to a bug in the JavaScript implementation. Simply resubmit if that happens to you.
*/
#include <iostream>
#include <math.h>
int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8)
{
	return sqrt(pow(age1,2)+ pow(age2, 2)+ pow(age3, 2)+ pow(age4, 2)+ pow(age5, 2)+ pow(age6, 2)+ pow(age7, 2)+ pow(age8, 2))/2;
}
bool equal(int a, int b) {
	return a == b;
}
int main()
{
	std::cout << std::boolalpha;

	std::cout << equal(predictAge(65, 60, 75, 55, 60, 63, 64, 45), 86) << "\n";

	return 0;
}