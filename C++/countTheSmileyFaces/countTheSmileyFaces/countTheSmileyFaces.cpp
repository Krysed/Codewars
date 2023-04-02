/*
Given an array (arr) as an argument complete the function countSmileys that should return the total number of smiling faces.

Rules for a smiling face:

Each smiley face must contain a valid pair of eyes. Eyes can be marked as : or ;
A smiley face can have a nose but it does not have to. Valid characters for a nose are - or ~
Every smiling face must have a smiling mouth that should be marked with either ) or D
No additional characters are allowed except for those mentioned.

Valid smiley face examples: :) :D ;-D :~)
Invalid smiley faces: ;( :> :} :]

Example
countSmileys([':)', ';(', ';}', ':-D']);       // should return 2;
countSmileys([';D', ':-(', ':-)', ';~)']);     // should return 3;
countSmileys([';]', ':[', ';*', ':$', ';-D']); // should return 1;
Note
In case of an empty array return 0. You will not be tested with invalid input (input will always be an array). Order of the face (eyes, nose, mouth) elements will always be the same.
*/
#include <algorithm>
#include <iostream>
#include <vector>
int countSmileys(std::vector<std::string> arr)
{
    int count=0;
    std::for_each(begin(arr), end(arr), [&count](std::string s) {
        if (s[0] == ':' || s[0] == ';') {
            if (s[1] != 'o') {
                if ((s[1] == ')') || (s[1] == 'D') || (s[2] == ')') || (s[2] == 'D')) {
                       count++;
                }
            }
        }
    }
    );
    return count;
}
template <typename T>
bool equal(T a, T b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(countSmileys({ ":D", ":~)", ";~)", ":)" }), 4) << "\n";
    std::cout << equal(countSmileys({ ":)", ":(", ":D", ":O", ":;" }), 2) << "\n";
    std::cout << equal(countSmileys({ ";]", ":[", ";*", ":$", ";-D" }), 1) << "\n";

    return 0;
}
