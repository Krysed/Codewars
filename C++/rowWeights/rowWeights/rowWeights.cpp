/*
Scenario
Several people are standing in a row divided into two teams.
The first person goes into team 1, the second goes into team 2, the third goes into team 1, and so on.

Task
Given an array of positive integers (the weights of the people), return a new array/tuple of two integers, where the first one is the total weight of team 1, and the second one is the total weight of team 2.

Notes
Array size is at least 1.
All numbers will be positive.
Input >> Output Examples
rowWeights([13, 27, 49])  ==>  return (62, 27)
Explanation:
The first element 62 is the total weight of team 1, and the second element 27 is the total weight of team 2.

rowWeights([50, 60, 70, 80])  ==>  return (120, 140)
Explanation:
The first element 120 is the total weight of team 1, and the second element 140 is the total weight of team 2.

rowWeights([80])  ==>  return (80, 0)
Explanation:
The first element 80 is the total weight of team 1, and the second element 0 is the total weight of team 2.
*/
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> rowWeights(const vector <int>& weights)
{
    int first = 0, second = 0;
    for (int i = 0; i < weights.size(); ++i) { if (i % 2)second += weights[i]; else first += weights[i]; }
    return { first,second };
}
template<typename T>
bool equal(T a, T b) {
    return a == b;
}
int main()
{
    cout << boolalpha;

    cout << equal(rowWeights({ 80 }), { 80,0 }) << "\n";
    cout << equal(rowWeights({ 100,50 }), { 100,50 }) << "\n";
    cout << equal(rowWeights({ 50,60,70,80 }), { 120,140 }) << "\n";

    return 0;
}