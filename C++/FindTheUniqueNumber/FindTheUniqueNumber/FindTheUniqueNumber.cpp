#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

float find_uniq(const vector<float>& v)
{
    if ((v[0] != v[1]) && (v[0] != v[2]))return v[0];
    if (v[v.size()-1] != v[v.size() - 2] && v[v.size()-1] != v[v.size() - 3])return v[v.size()-1];

    for (int i = 1; i < int(v.size()) - 1; i++)
        if (v[i] != v[i - 1] && v[i] != v[i + 1])return v[i];
   
    return -1;
}

bool equal(float a, float b) {
    return a == b;
}

int main()
{
    cout << std::boolalpha;

    cout << equal(find_uniq({ 3,2,2 }), 3.f) << "\n";
    cout << equal(find_uniq({ 1,2,1 }), 2.f) << "\n";
    cout << equal(find_uniq({ 1, 1, 1, 2, 1, 1 }),2.f)<< "\n";
    cout << equal(find_uniq({ 0, 0, 0.55, 0, 0 }), 0.55f) << "\n";
    cout << equal(find_uniq({999.666,  999.666, 999.666, 999.666, 999.666, 999.666, 999.666, 999, 999.666}), 999.f) << "\n";

	return 0;
}
